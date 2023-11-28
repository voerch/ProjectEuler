#include<stdio.h>
#include<math.h>

void main()
{

long long n,x,sum;
n=13082761331670030;

for(x=1;x<n;x++)
{
	if(fmod(pow(x,3),n)== 1)
		sum+=x;
}
printf("%lld",sum);
}
