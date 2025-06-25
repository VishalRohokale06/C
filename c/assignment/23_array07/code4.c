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
        
	int product=1;

        printf("Product of even elements: ");
        for(int i=0;i<size;i++){
                if(arr[i]%2==0){
                        product*=arr[i];
                }
        }
        printf("%d\n",product);
}
