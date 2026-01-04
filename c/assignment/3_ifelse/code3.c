#include <stdio.h>

void main(){

	int year;

	printf("Enter year : ");
	scanf("%d",&year);

	if(year % 4 == 0){
		printf("Year is Leaf year\n");
	}else{
		printf("Year is not leaf\n");
	}
}
