#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	int num=rows*rows;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			if(i==1){
			printf("%d\t",num);
                        num-=2;
			}
			else if(i%2==0){
			printf("%d\t",num++);
			}
			else{
				printf("%d\t",num);
				num-=2;
			}
		}
		if (i != 1 && i % 2 == 0) {
            num += 3;
        }
		printf("\n");
	}
}
