#include <stdio.h>

int main()
{
	int digit,kasus,k,i,test,j,temp=0,tempdigit=0;
	long long unsigned angka[10001];
	
	scanf("%d %d",&digit,&kasus);
	tempdigit = digit - 1;
	for(i=0;i<digit;i++)
	{
		scanf("%llu",&angka[i]);
	}
	for(i=0;i<digit;i++)
	{
		for(j=0;j<tempdigit-i;j++)
		{
			if(angka[j] > angka[j+1])
			{
				temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
		}
	}
	for(k=1;k<=kasus;k++)
	{
		scanf("%d",&test);
		printf("%llu\n",angka[test-1]);
	}
	return 0;
}
