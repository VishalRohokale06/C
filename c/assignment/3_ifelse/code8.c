#include <stdio.h>

void main(){

	int percent;

	printf("Percentage : ");
	scanf("%d",&percent);

	if(percent >= 85){
		printf("Passed:First class with distinction\n");
	}else if(percent >= 75 && percent < 85){
		printf("Passed:First class\n");
	}else if(percent >= 60 && percent < 75){
		printf("Passed:Second class\n");
	}else if(percent >= 50 && percent < 60){
		printf("Passed\n");
	}else{
		printf("Failed\n");
	}
}
