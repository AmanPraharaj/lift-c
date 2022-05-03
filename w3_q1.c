#include <stdio.h>
int abs(int n1, int n2);
int main() {
int n1, n2;
printf("Enter two positive integers: ");
scanf("%d %d", &n1, &n2);
printf("abs of %d and %d is %d.", n1, n2, abs(n1, n2));
return 0;
}
int abs(int n1, int n2) {
if (n2 != 0)
return gcd(n2, n1 % n2);
else
return n1;
}
