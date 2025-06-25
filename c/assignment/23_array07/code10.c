#include <stdio.h>

void main(){

	int size;
	printf("Enter size:\n");
	scanf("%d",&size);

	char arr[size];
	printf("Enter the elements:\n");

	for(int i=0;i<size;i++){
		scanf("%s",&arr[i]);
	}

	for(int i=0;i<size;i++){
		if(arr[i] == 'A' || arr[i] == 'a' ||
				arr[i] == 'E' || arr[i] == 'e' ||
				arr[i] == 'I' || arr[i] == 'i' ||
				arr[i] == 'O' || arr[i] == 'o' ||
				arr[i] == 'U' || arr[i] == 'u' ){
			printf("%c\t%d\n",arr[i],i);
		}
	}
}
