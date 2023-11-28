#include<stdio.h>
#include<math.h>
int isaprime(long x)
{
long i,j;
j=x;
for(i=2; i<=j;i++)
{
	if(x%i==0)
		return 1;
	j=x/i;
}

return 0;

}

void main()
{
long i,sum=5;

for (i=4;i<=2000000;i++)
{
	if(isaprime(i)==0)
		sum+=(i);

}
printf("%lld\n",sum);
}

