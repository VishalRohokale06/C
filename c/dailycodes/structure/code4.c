#include <stdio.h>
#include <string.h>

struct Employee{

	char empName[20];
	int empId;
	int empSal;

};

void main(){

	struct Employee emp;

	strcpy(emp.empName,"Vishal");
	emp.empId=10;
	emp.empSal=1.5;

	printf("EmpName:%s\n",emp.empName);
	printf("EmpId:%d\n",emp.empId);
	printf("EmpSal:%d\n",emp.empSal);
}
