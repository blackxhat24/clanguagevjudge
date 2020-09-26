#include <stdio.h>

int main()
{
	int k,kasus,j=1;
	
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		unsigned long long mod,num,mul,awal;
		unsigned long long i = 0,count = 0,total=0;
		unsigned long long temp[100000]={0};
		scanf("%llu %llu %llu", &mod,&num,&mul);
		awal = num;
		for(i=0;i != 1;i)
		{
			num = (num*mul)%mod;
			count = count+1;
			if(temp[num]==0 && num != awal)
			{
				temp[num]=count;
			}
			else
			{
				total = count - temp[num];
				i = i+1;
			}
		}
		printf("Case #%d: %llu\n",k,total);
		count = 0;
//		j = j +1;
	}
	return 0;
}
