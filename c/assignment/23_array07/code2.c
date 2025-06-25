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
        int sum=0;
        for(int i=0;i<size;i++){
                if(i%2==0){
                       sum+=arr[i];
                }
        }
        printf("Sum of even indexed elements: %d\n",sum);

}
