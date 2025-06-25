#include <stdio.h>

void main(){

	int size;
	printf("Enter size:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        
	printf("Printing even indexed elements: ");
	for(int i=0;i<size;i++){
		if(i%2==0){
			printf("%d\t",arr[i]);
		}
	}
	puts("");
}
