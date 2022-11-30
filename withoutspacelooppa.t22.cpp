#include<stdio.h>
main(){
	char r,c,rc='A';
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("%c ",rc++);
		}
		printf("\n");
	}
}
