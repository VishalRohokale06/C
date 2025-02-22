#include <stdio.h>

struct Employee{

	char empName[20];
	int empId;
	int empSal;

}emp={"Vishal",10,2.5};

void main(){
        
	printf("EmpName:%s\n",emp.empName);
	printf("EmpId:%d\n",emp.empId);
	printf("EmpSal:%d\n",emp.empSal);
}
