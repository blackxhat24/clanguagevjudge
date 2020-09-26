#include <stdio.h>

int k,kasus,input,i,angka1,angka2;
int kuad[4]={0};

void check_kuadran()
{
	if(angka1 > 0 && angka2 > 0)
	{
		kuad[0]++;
	}
	else if(angka1 < 0 && angka2 > 0)
	{
		kuad[1]++;
	}
	else if(angka1 < 0 && angka2 < 0)
	{
		kuad[2]++;
	}
	else if(angka1 > 0 && angka2 < 0)
	{
		kuad[3]++;
	}
}
void cetak()
{
	if(kuad[0] >= input-1 ||kuad[1] >= input-1 ||kuad[2] >= input-1 ||kuad[3] >= input-1)
	{
		printf("Case #%d: YES\n",k);
	}
	else
	{
		printf("Case #%d: NO\n",k);
	}
}
int main()
{
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		for(i=0;i<4;i++)
		{
			kuad[i] = 0;
		}
		scanf("%d",&input);
		for(i=0;i<input;i++)
		{
			scanf("%d %d",&angka1,&angka2);
			check_kuadran();
		}
		cetak();
	}
}
