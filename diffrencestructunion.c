#include <stdio.h>
struct student {
    char name[60];
    int roll_no;
    float marks;
} sdt;
union item
{
    int x;
    float y;
    char ch;
};
void main() {
    union item it;
    it.x = 12;
    it.y = 20.2;
    it.ch = 'a';
    printf("Enter the following information:\n");
    printf("Enter student name: ");
    fgets(sdt.name, sizeof(sdt.name), stdin);
    printf("Enter student roll number: ");
    scanf("%d", & sdt. roll_no);
    printf("Enter students marks: ");
    scanf("%f", & sdt.marks);
    printf("The information you have entered is: \n");
    printf("Student name: ");
    printf("%s", sdt.name);
    printf("Student roll number: %d\n", sdt. roll_no);
    printf("Student marks: %.1f\n", sdt.marks);
    printf("output of union\n");
    printf("%d\n", it.x);
    printf("%f\n", it.y);
    printf("%c\n", it.ch);

printf("\n\nIn the above program, a structure called student is created. This structure has three data members: 1) name (string), 2) roll_no (integer), and 3) marks (float");

printf("\n\nwe can see that the values of x and y gets corrupted. Only variable ch prints the expected result. It is because, in union, the memory location is shared among all member data types");

printf("\n\nTherefore, the only data member whose value is currently stored, will occupy memory space. The value of the variable ch was stored at last, so the value of the rest of the variables is lost");
}

