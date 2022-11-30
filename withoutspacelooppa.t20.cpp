#include<stdio.h>
main(){
	int r,c;
	for(r=0;r<=4;r++){
		for(c=0;c<=r;c++){
		   if((r+c)%2==0){
		   	printf("- ");
		   }
		   else {
		   printf("| ");
		   }
		   
		}
			printf("\n");
	}
}
