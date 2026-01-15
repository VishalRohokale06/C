#include <stdio.h>

void main(){

        int size;
        printf("Enter the size of the array:\n");
        scanf("%d",&size);

        int arr[size];
        printf("Enter the elements:\n");

        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
        }

        int isPrime=1;
        for(int i=0;i<size;i++){
                int num=arr[i];
                if(num<=1){
                        isPrime=0;
                }else{
                for(int j=2;j<num;j++){
                        if(num%j==0){
                        isPrime=0;
                        break;
                        }
                }
		}
                if(!isPrime){
                        printf("%d\n",i);
                }
        }
}
