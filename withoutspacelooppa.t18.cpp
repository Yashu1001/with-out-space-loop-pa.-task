#include<stdio.h>
main(){
	int r,c;
	for(r=0;r<=4;r++){
		for(c=0;c<=r;c++){
		printf("%i ",c%2);
		}
		printf("\n");
	}
}
