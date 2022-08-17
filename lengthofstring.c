#include <stdio.h>
void main()
{
    char str[50];
    int i=0;
    printf("enter string:-");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        ++i;
    }
    printf("Length of string is %d",i);
}