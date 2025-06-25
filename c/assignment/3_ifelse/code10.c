#include <stdio.h>

void main(){

	float accbalance = 5000.00f;
	float withdrawalAmount;

	printf("Enter the amount you wish to withdraw:");
	scanf("%f",&withdrawalAmount);

	if(withdrawalAmount > 0){
		if(withdrawalAmount <= accbalance){
			if(withdrawalAmount <= 2000.00f){
					accbalance -= withdrawalAmount;
					printf("Withdrawal successfull. Your new balace is $%f\n",accbalance);
					
		}else{
					printf("Withdrawl limit exceeded.Ypu can only withdraw upto $2000 at time\n");
					}
	}else{
					printf("Insufficient fun. Your current balance is $%f\n",accbalance);
					
					}
}else{
					printf("Invalid amount! Please enter a posiive amount to withdraw\n");
}
}
