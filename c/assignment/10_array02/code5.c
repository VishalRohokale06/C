#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of array:\n");
	scanf("%d",&size);

	int ages[size];
	int count=0;
	printf("Enter the child age\n");
	while(count < size){
		int age;
		scanf("%d",&age);

		if(age>5){
			printf("Age should not be greater than 5. Re-enter the age\n");
		}else{
			ages[count]=age;
			count++;
		}
	}
	printf("-------------\n");
	for(int i=0;i<size;i++){
		printf("%d\n",ages[i]);
	}
}
		
