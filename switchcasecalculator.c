#include <stdio.h>
void main()
{
    int add,mul,sub,div,num1,num2,num;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("select form below");
    printf("\n1 : addition\n2 : substraction\n3 : division\n4 : multiplication\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            printf("addition is %d",num1+num2);
        }
        break;
         case 2:
        {
            printf("substraction is %d",num1-num2);
        }
        break;
         case 3:
        {
            printf("division is %d",num1/num2);
        }
        break;
         case 4:
        {
            printf("multiplication is %d",num1*num2);
        }
        break;
        default:
        {
            printf("invalid input");
        }
        break;
       
    }

}