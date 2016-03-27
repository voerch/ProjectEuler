#include<stdio.h>

long long Fibonacci(long long n)
{
long long a;
if (n == 0)
	return (0);
      
else if ( n == 1 )
	return (1);
else
	return (Fibonacci(n-1) + Fibonacci(n-2));
} 

long long main()
{
	long long a,c,sum=0;

for (c=0; a<4000000;c++)
{
	a = Fibonacci(c);
	if(a%2==0)
		sum+=a;
}
printf("%lld\n",sum);
}
