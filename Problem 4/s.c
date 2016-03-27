#include <stdio.h>

int reverse(int n)
{
int reverse;
while (n != 0)
{
	reverse = reverse * 10;
	reverse = reverse + n%10;
	n       = n/10;
}
return reverse;
}

void main()
{
int n,a;
printf("Enter a number to reverse\n");
scanf("%d", &n);
a=reverse(n);
if(n==a)
	printf("%d is a palindrome\n", n);
}
