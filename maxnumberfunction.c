#include <stdio.h>
int max(int arr[],int k)
{
    int t,i;
    t=arr[0];
    for(i=1;i<k;i++)
    {
        if(arr[i]>t)
        t=arr[i];
    }
    return(t);
}
void main()
{
    int a[]={10,5,4,3,1};
    int n=5,m;
    m=max(a,n);
    printf("maximum number is %d",m);
}