#include <stdio.h>
#define M 1000000009

int main()
{
	int k,kasus;
	long long int a=1,b=1,c=0,sum=0,i,input;
	
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%lld",&input);
		for(i=0;i<input;i++)
		{
			sum = sum + a;
			c = a+b;
			a = b%M;
			b = c%M;
		}
		printf("Case #%d: %lld\n",k,sum%M);
		a = 1;
		b = 1;
		c = 0;
		sum = 0;
	}
}
