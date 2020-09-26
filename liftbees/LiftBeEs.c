#include <stdio.h>

int main()
{
	int kasus,k;
	int i,j,l;
	int person;
	int count;
	int floor[23];
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		for(i=0;i<=22;i++)
		{
			floor[i]=0;
		}
		scanf("%d",&person);
		count = 0;
		for(j=0;j<person;j++)
		{
			scanf("%d", &l);
			if(floor[l] != 1 && floor[l+1] != 1 && floor[l-1] !=1)
			{
				count++;
				floor[l] = 1;
			}
		}
		
		printf("Case #%d: %d\n",k,count);
	}
	return 0;
}
