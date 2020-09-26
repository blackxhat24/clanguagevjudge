#include <stdio.h>
int main()
{
	int a,b,i,j,arr[100000];
	int k,kasus,max=0,count,min=0;
	
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		for(i=0;i<100000;i++)
		{
			arr[i]=0;
		}
		scanf("%d",&a);
		for(i=1;i<=a;i++)
		{
			scanf("%d", &b);
			arr[b]++;
		}
		printf("Case #%d:\n",k);
		for(i=0;i<100000;i++)
		{
			if(arr[i]>0)
			{
			printf("%d %d\n",i,arr[i]);
			}
		}
	}
	return 0;
}
