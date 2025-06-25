#include <stdio.h>

void main(){

	int side1,side2,side3;

	printf("side1:");
	scanf("%d",&side1);
	 printf("side2:");
        scanf("%d",&side2);
	 printf("side3:");
        scanf("%d",&side3);

	if((side1*side1 + side2*side2) == side3*side3){
		printf("Pythagorean triplet\n");
	}else if(side2*side2 + side3*side3 == side1*side1){
		printf("Pythagorean triplet\n");
	}else if(side1*side1 + side3*side3 == side2*side2){
		printf("Pythagorean triplet\n");
	}else{
		printf("Not an Pythagorean triplet\n");
	}
}
