#include <stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSort(int arr[],int size){
	for(int i=0;i<size;i++){
		int minIndex=i;
	

	for(int j=i+1;j<size;j++){
                if(arr[j]<arr[minIndex]){
				minIndex=j;
				}
	}

	swap(&arr[i],&arr[minIndex]);
}
}

void main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    selectionSort(arr,size);

    printf("Minimum elements at each index:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

