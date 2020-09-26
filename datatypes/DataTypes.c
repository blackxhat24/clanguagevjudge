#include <stdio.h>
int main()
{
	int kasus, k;
	long long a;
	long long c,e;
	int b,d;
	scanf("%d", &kasus);
	b = -2147483648;
	d = 2147483647;
	c = -9223372036854775808;
	e = 9223372036854775807;
	for(k=1;k<=kasus;k++)
	{
		scanf("%lld", &a);
		printf("Case #%d: ", k);
		if(a<=d && a>=b)
		{
			printf("integer\n");
		}
		else if(a<=e && a>=c)
		{
			printf("long long\n");
		}
	}
}
