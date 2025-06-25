#include <stdio.h>
#include <string.h>

struct Employee{

	char empName[20];
	int empId;
	double empSal;

}emp={"Vedant",20,2.2};   //BSS

struct Employee emp3={"Ketan",40,4};      //BSS

void main(){

	struct Employee emp2={"Om",30,1.1};   //Stack
	
	struct Employee emp1;                 //Stack

	strcpy(emp1.empName,"Vishal");
	emp1.empId=10;
	emp1.empSal=2.8;

	printf("EmpName:%s\n",emp1.empName);
	printf("EmpId:%d\n",emp1.empId);
	printf("EmpSal:%lf\n",emp1.empSal);

	printf("EmpName:%s\n",emp.empName);
	printf("EmpId:%d\n",emp.empId);
	printf("EmpSal:%lf\n",emp.empSal);
        
	printf("EmpName:%s\n",emp2.empName);
        printf("EmpId:%d\n",emp2.empId);
        printf("EmpSal:%lf\n",emp2.empSal);
}
