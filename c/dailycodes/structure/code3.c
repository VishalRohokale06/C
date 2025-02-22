#include <stdio.h>

struct Employee{

	char empName[20];
	int empId;
	double sal;
};

void main(){

	struct Employee emp={"Vishal",10,1.5};

	printf("EmpName:%s\n",emp.empName);
	printf("EmpId:%d\n",emp.empId);
	printf("EmpSal:%lf\n",emp.sal);
}
