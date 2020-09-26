#include <stdio.h>

int main()
{
	long long int k,kasus,a=0,x=0,b=0,d=0,c=0,i,count =0;
	
	scanf("%lld",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		printf("Case #%lld: ",k);
		for(i=0;i<1000001;i++)
		{
			if((a*i+b)%d==c)
			{
				count++;
			}
			else if((a*i+b)%d!=c)
			{
				count+=0;
			}
		}
		if(count>0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		count = 0;
	}
}
