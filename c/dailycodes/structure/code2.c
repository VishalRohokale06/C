#include <stdio.h>

struct Employee{

	char empName[20];
	int empId;
	double empSal;
};

void main(){

	printf("%ld\n",sizeof(struct Employee));
}
