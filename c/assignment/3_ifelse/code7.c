#include <stdio.h>

void main(){

	int sellp,costp;

	printf("selling price:");
	scanf("%d",&sellp);
	printf("cost price:");
	scanf("%d" ,&costp);

	if(sellp > costp){
		printf("Profit is %d\n",sellp-costp);
	}else if(sellp < costp){
		printf("Loss is %d\n",costp-sellp);
	}else{
		printf("No profit no loss\n");
	}
}
