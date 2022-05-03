#include <stdio.h>
int main(){	
int n,l,p,x,f,m;	
printf("Enter the number:");	
scanf("%d",&n);	
l=n%10;	
p=n/10;	
x=1;	
while(p>0)
{	x=x*10;
		p=p/10;	}
f=n/x;	
m=(n%x)/10;	
printf("Swaped number:");
printf("%d%d%d",l,m,f);	
return 0;	}
