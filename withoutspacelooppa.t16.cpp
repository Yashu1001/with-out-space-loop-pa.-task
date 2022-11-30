#include<stdio.h>
main(){
	int r,c;
	for(r=4;r>=0;r--){
		for(c=0;c<=r;c++){
		   if((r+c)%2==0){
		   	printf("1 ");
		   }
		   else {
		   printf("0 ");
		   }
		   
		}
			printf("\n");
	}
}
