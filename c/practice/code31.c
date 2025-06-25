#include <stdio.h>
#include <string.h>

struct Employee{
	int empId;
	char empName[20];
	double sal;
}; 

void main(){

	struct Employee emp1;
	strcpy(emp1.empName , "Vishal");
	emp1.empId=16;
	emp1.sal=25;
	printf("%s\n",emp1.empName);
	 printf("%d\n",emp1.empId);
	  printf("%lf\n",emp1.sal);
}
