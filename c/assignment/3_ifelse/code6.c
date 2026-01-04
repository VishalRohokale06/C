#include <stdio.h>

void main(){

	float percentage;

	printf("Percents :");
	scanf("%f",&percentage);

	if(percentage >= 85){
		printf("Medical\n");
	}else if(percentage < 85 && percentage >=75){
		printf("Engineering\n");
	}else if(percentage < 75 && percentage >= 65){
		printf("Pharmacy\n");
	}else{
		printf("Farming\n");
	}
}
