#include <stdio.h>
int main()
{

int m, n;
printf("order of matrix:\n");
scanf("%d %d",&m,&n);
int i, j;
int mat1[m][n], mat2[m][n], mat3[m][n];
printf("enter elemets of matix 1\n");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
scanf("%d",&mat1[i][j]);
}
printf("enter elements of matrix 2\n");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
scanf("%d",&mat2[i][j]);
}

for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
mat3[i][j] = mat1[i][j] - mat2[i][j];
}
}
printf("Resultant matrix:\n");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
printf("%d ", mat3[i][j]);
printf("\n");
}
return 0;
}