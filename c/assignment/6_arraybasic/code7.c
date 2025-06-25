#include <stdio.h>

void main(){

        int size;
        printf("Enter the size elements:\n");
        scanf("%d",&size);

        int evensum=0;
	int oddsum=0;
        int arr[size];
        printf("Enter the elements:\n");

        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
                if(i%2==0){
                        evensum+=arr[i];
                }else{
			oddsum+=arr[i];
		}
        }
        printf("Difference between even index elements sum and odd index elements sum is: %d\n",evensum-oddsum);
}
 
