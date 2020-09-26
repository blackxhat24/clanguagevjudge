#include <stdio.h>
#include <string.h>

int main()
{
	int k,kasus,warna,i,banyak,count=0,temp[4][1001]={0},j;
	char size[5];
	
	
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<1001;j++)
			{
				temp[i][j] = 0;
			}
		}
		scanf("%d",&banyak);
		for(i=0;i<banyak;i++)
		{
			scanf("%s %d",&size,&warna);
			if(size[0] == 'S')
			{
				j = 0;
			}
			else if(size[0] == 'M')
			{
				j = 1;
			}
			else if(size[0] == 'L')
			{
				j = 2;
			}
			temp[j][warna]++;
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<1001;j++)
			{
				while(temp[i][j]>=2)
				{
					temp[i][j] = temp[i][j] - 2;
					count = count + 10;
				}
			}
		}
		printf("Case #%d: %d\n",k,count);
		count = 0;
	}
	return 0;
}
