#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id;
    int age;
    char address[100]
} Employee;
int main()
{
    
    int n=5;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("empno: ");
        scanf("%d",&employees[i].id);
        printf("age: ");
        scanf("%d",&employees[i].age);
        char ch = getchar();
        printf("Address: ");
        scanf("%s",&employees[i].address);
        printf("\n");
    }
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
        printf("Salary \t: ");
        printf("%.d \n",employees[i].age);
        printf("Address : ");
        printf("%s",employees[i].address);
        printf("\n");
    }
    return 0;
}