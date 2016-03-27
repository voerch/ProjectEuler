//How to find difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <stdio.h>
#include <math.h>

int main()
{
int i,X=0,Y=0;

for(i=1;i<=100;i++)
{
X+=i;
Y+=i*i;
}

X=pow(X,2);

printf("X is %d\nY is %d\nDifference is %d\n",X,Y,X-Y);

}
