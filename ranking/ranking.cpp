#include <stdio.h>

int k,kasus,murid,i,ranking[1001],point[1001],j;

void sorting()
{
	int temp=0;
	for(i=0;i<murid-1;i++)
	{
		for(j=0;j<murid-i-1;j++)
		{
			if(ranking[j] < ranking[j+1])
			{
				temp = ranking[j];
				ranking[j] = ranking[j+1];
				ranking[j+1] = temp;
			}
		}
	}
}
int main()
{	
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d",&murid);
		for(i=0;i<murid;i++)
		{
			scanf("%d",&point[i]);
			ranking[i] = point[i];
	 	}
		sorting();
		printf("Case #%d:",k);
		for(i=0;i<murid;i++)
		{
			for(j=0;j<murid;j++)
			{
				if(point[i] == ranking[j])
				{
					printf(" %d",j+1);
					break;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
