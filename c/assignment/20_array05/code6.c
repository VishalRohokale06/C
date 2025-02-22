#include <stdio.h>

void main(){

	int size;
	printf("Enter Array elements:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter Array elements:\n");
	
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Even Elements Array :");
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			printf("%d\t",arr[i]);
		}
	}
	puts("");
	printf("Odd Elements Array  :");
        for(int i=0;i<size;i++){
                if(arr[i]%2==1){
                        printf("%d\t",arr[i]);
                }
        }
        puts("");
}
