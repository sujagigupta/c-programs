# include<stdio.h>
int main()
{
int a[50][50];
int m,n,i,j,counter=0;
printf("enter the no of rows");
scanf("%d",&m);
printf("enter the no of colomun");
scanf("%d",&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a[m][n]);
}

printf("matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
printf("upper trianglar matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i=j)
printf("%d",a[i][j]);
else
printf("0");}}
return 0;
}

