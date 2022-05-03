#include<stdio.h>
int isEve(int num)
{
    return !(num & 1);
}
int main()
{
int num;
  printf("Enter any number: ");
  scanf("%d", &num);
  if(isEve(num))
{
printf("The number is even.");
}
else
{
printf("The number is odd.");
}
return 0;
}
