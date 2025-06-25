#include <stdio.h>

void main(){

	int size;
	printf("Enter size :\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements in the array:\n");
	
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int start;
	printf("Enter the start of the range:");
	scanf("%d",&start);

	int end;
	printf("Enter the end of the range:");
	scanf("%d",&end);
        
	int flag =0;
        int temp[3];
	int j;
	for(int i=0;i<size;i++){
		if(arr[i]>start && arr[i]<end){
			temp[j++]=arr[i];
			flag=1;
			
		}
	}
	if(flag==1){
		printf("Elements of an array that fall in between %d and %d are: ",start,end);
		for(int i=0;i<j;i++){
			printf("%d  ",temp[i]);
		}
		puts("");
	}else{
          printf("No elements of an array fall in between %d and %d.\n",start,end);
}
}
