#include <stdio.h>

void main(){

        int num;
        printf("Enter num:");
        scanf("%d",&num);

        int count=0;

        if(num>1){
                for(int i=1;i<=num;i++){
                if(num%i==0){
                        count++;
                }
                }
        }

        if(count>2){
                printf("Composite\n");
        }else{
                printf("Prime\n");
        }
}
