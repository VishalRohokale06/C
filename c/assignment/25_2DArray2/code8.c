#include<stdio.h>
#include<math.h>

int isPrime(int num){

        if(num<2) return 0;

	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}

void main(){

        int row;
        printf("Enter row=");
        scanf("%d",&row);

        int column;
        printf("Enter column=");
        scanf("%d",&column);

       int arr[row][column];
       printf("Enter array elements:\n");
       for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                scanf("%d",&arr[i][j]);
        }
       }
       int psum=0;
       for(int i=0;i<row;i++){
              for(int j=0;j<column;j++){
               if(isPrime(arr[i][j])){
		       psum+=arr[i][j];
	       }
       }
       }
       printf("Sum of prime numbers: %d\n",psum);
}
