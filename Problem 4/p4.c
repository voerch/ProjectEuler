#include <stdio.h>

int reverse(int n)
{
int reverse;
reverse=0;
while (n != 0)
{
	reverse*=10;
	reverse+=n%10;
	n=n/10;
}
return reverse;
}

void main()
{
int n,a,i,j,highest;
highest=0;
for(i=100;i<1000;i++)
{
	for(j=100;j<1000;j++)
		{
			n=i*j;
			a=reverse(n);
			if(n==a)
			{
				if(a>highest)
					highest=a;
			}

		}
}
printf("largest palindrome made from the product of two 3-digit numbers is %d \n",highest);
}
