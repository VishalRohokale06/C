#include <stdio.h>

void main(){

	int size;
	printf("size=");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int id;
	printf("Enter id to search:\n");
	scanf("%d",&id);
	for(int i=0;i<size;i++){
		if(id==arr[i]){
			printf("Id %d found at index %d\n",id,i);
		}
	}
}

