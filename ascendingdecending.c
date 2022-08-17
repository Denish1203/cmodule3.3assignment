#include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30],option;
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
            printf("enter 1 for ascending");
            printf("enter 2 for descending");
            scanf("%d",&option);
switch(option)
case 1:
{
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
            break;
case 2:
{
            for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        printf("The numbers arranged in descending order are given below\n");
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }
}
    }

    }