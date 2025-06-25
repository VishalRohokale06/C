#include <stdio.h>

void main(){

	int size;
	printf("Enter size:");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        int ecount=0;
	int ocount=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			ecount++;
		}else{
			ocount++;
		}
	}
	printf("%d\n",ecount);
	printf("%d\n",ocount);
}
