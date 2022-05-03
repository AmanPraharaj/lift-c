#include <stdio.h>
int main()
{
int a=0, b=1, c,count=3,n;
printf("enter N");
scanf("%d",&n);
if (n==1)
{
printf("%d",a);
}
else if (n==2)
{
printf("%d",a);
printf(" %d",b);
}
else if (n>2)
{
printf("%d",a);
printf(" %d",b);
while(count<=n)
{
c=a+b;
a=b;
b=c;
count++;
printf(" %d",c);
}
}
return 0;
}
