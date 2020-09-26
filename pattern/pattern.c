#include <stdio.h>

void pattern(int a)
{
	if(a == 1)
	{
		printf("A");
		return;
	}
	pattern(a-1);
	printf("%c",a+64);
	pattern(a-1);
}
int main()
{
	int k,kasus,pola = 0;
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d",&pola);
		printf("Case #%d: ",k);
		pattern(pola);
		printf("\n");
	}
	return 0;
}
