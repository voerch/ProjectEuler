#include<stdio.h>

long long Fibonacci(long long n)
{
long long a;
if ( n == 0 )
{
a=0;
return a;
}
      
else if ( n == 1 )
{
a=1;
 return a;
}
else
{
a=Fibonacci(n-1) + Fibonacci(n-2);
return a;
}
} 

long long main()
{
	long long a,c,sum=0;

for (c=0; a<4000000;c++)
{
	a = Fibonacci(c);
	if(a%2==0)
		sum=sum+a;
   }
printf("%lld\n",sum);

}
 

