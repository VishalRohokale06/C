#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of an array:\t");
	scanf("%d",&size);
	getchar();
       
	char arr[size];
	printf("Enter the elements:\n");

	for(int i=0;i<size;i++){
		scanf("%c",&arr[i]);
		getchar();

	}
	printf("Printing the vowels with index:\n");
	for(int i=0;i<size;i++){

		if(arr[i] == 'A' || arr[i] == 'a' || arr[i] == 'E' || arr[i] == 'e' || arr[i] == 'I' || arr[i] == 'i' || arr[i] == 'O' || arr[i] == 'o' || arr[i] == 'U' || arr[i] ==	'u'){
	printf("%c %d\n",arr[i] ,i);
	}
	}
}
