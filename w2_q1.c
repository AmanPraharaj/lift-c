#include <stdio.h>
#include <string.h>
int main()
{	
char s1[10] s2[10];
int n;		
printf("enter string1:" );	
gets(s1);	
printf("enter string2:" );	
gets(s2);	
strcat(s1,s2);	
printf("Concartinated string:%s",s1);	
return 0;
}
