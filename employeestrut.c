#include <stdio.h>
struct employee{
    int empno;
    char empname[30];
    char empaddress[100];
    int age;
};
 
void main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("empno :");          
    scanf("%d",&emp.empno);
    printf("employee name:");
    scanf("%s",emp.empname);
    printf("enter employee address:");
    scanf("%s",emp.empaddress);            
    printf("enter employee age:");        
    scanf("%d",&emp.age);
     
    printf("\nEntered detail is:\n");
    printf("empno: %d",emp.empno);
    printf("Name: %s\n",emp.empname);
    printf("address: %s\n",emp.empaddress);
    printf("age: %d\n",emp.age);
}