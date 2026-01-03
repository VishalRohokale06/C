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

        int esum=0;
	int osum=0;

        printf("difference between even index element sum and odd indexed elements sum is: ");
        for(int i=0;i<size;i++){
                if(i%2==0){
                        esum+=arr[i];
                }else{
			osum+=arr[i];
		}
        }
        printf("%d\n",esum-osum);
}
