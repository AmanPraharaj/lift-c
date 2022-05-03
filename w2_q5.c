#include<stdio.h>
#include<conio.h>
int main()
{  
int array[2][2];
int sum=0;
int arraytwo[2][2];
int product=1;
printf("enter the number for the first 2*2 array:\n");
for(int i=0;i<2;i++)
{for(int j=0;j<2;j++)
{scanf("%d",&array[i][j]);
}}
for(int i=0;i<2;i++)
{for(int j=0;j<2;j++)
{printf("%d ",array[i][j]);
}
printf("\n");
}
printf("enter the numbers for the second array:\n");
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{scanf("%d",&arraytwo[i][j]);
}}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
printf("%d ",arr2[i][j]);
}
printf("\n");
}
printf("sum matrix:\n");
for(int i =0;i<2;i++)
{
for (int j=0;j<2;j++)
{
sum=array[i][j]+arraytwo[i][j];
printf("%d ",sum);}
printf("\n");}
printf("Product matrix:\n");
for(int i =0;i<2;i++)
{
for (int j=0;j<2;j++)
{
prod=arr[i][j]*arr2[i][j];
printf("%d ",prod);
}
printf("\n");
}
return 0;
}
