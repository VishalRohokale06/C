#include <stdio.h>

void main(){

	int unit;
	float bill;

	printf("Units : ");
	scanf("%d",&unit);

	if(unit <= 100){
		bill = unit * 5;
	}else if(unit <= 300){
		bill = (100 *5) + ((unit-100)*7);
	}else{
		bill = (100*5) + (200*7) + ((unit-100-200)*10);
	}
	printf("The bill for %d units is : %f\n",unit,bill);
}	
