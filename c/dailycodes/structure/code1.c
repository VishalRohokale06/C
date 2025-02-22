#include <stdio.h>

struct Employee{

	char empName[20];
	int empId;
	float empSal;
};

void main(){

	printf("%ld\n",sizeof(struct Employee));
}
