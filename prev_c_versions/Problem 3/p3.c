//Finding prime factors of a number.


#include <stdio.h>

int main()
{
long long A,n;
printf("Prime Factors:\n");
scanf("%lld",&A);

for(n=2;A>=n;n++)
{
	if(A%n==0)
	{
		printf("%lld\n",n);
		for(;A%n==0;)
			A/=n;
	}
}

}
