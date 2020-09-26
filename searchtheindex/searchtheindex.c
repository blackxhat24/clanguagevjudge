#include <stdio.h>

unsigned long long kasus=0,array=0,input[10000]={0},angka=0,sum=0,kiri=0,point=0;

int sumarray()
{
	for(int i=0;i<array;i++)
	{
		kiri = i;
		sum = input[kiri];
		for(int j=i+1;j<array;j++)
		{
			sum += input[j];
			if(sum == angka)
			{
				printf("Case #%llu: %llu %llu\n",k,i,j);
				point = 1;
				break;
			}
			else if(angka == input[i])
			{
				printf("Case #%llu: %llu %llu\n",k,i,i);
				point = 1;
				break;
			}
			else
			{
				continue;
			}
		}
		if(point == 1)
		{
			break;
		}
		else if(angka == input[i])
		{
			printf("Case #%llu: %llu %llu\n",k,i,i);
			point = 1;
			break;
		}
		sum = 0;
	}
	if(point != 1)
	{
		printf("Case #%llu: -1\n",k);
	}
	sum = 0;
	point = 0;
	kiri = 0;
}
int main()
{
	scanf("%llu %llu",&array,&kasus);
	for(int i=0;i<array;i++)
	{
		scanf("%llu",&input[i]);
	}
	for(int k=1;k<=kasus;k++)
	{
		scanf("%llu",&angka);
		sumarray();
	}	
}
