#include <stdio.h>

int k,kasus,i,jumlah,row,j,row1,count,l,m;
long long int angka[200],temp=0;

void sorting()
{
	for(i=0;i<jumlah;i++)
	{
		for(j=0;j<jumlah;j++)
		{
			for(l=j+1;l<jumlah;l++)
			{
				if(angka[j] > angka[j+1])
				{
					temp = angka[j];
					angka[j] = angka[l];
					angka[l] = temp;
				}
			}
		}
	}
}
void cetak()
{
	row1 = 1;
	for(i=0;i<jumlah;i+=row)
	{
		printf("%lld",angka[i]);
		if(row1 == row)
		{
			count++;
			if(count == jumlah/row)
			{
				printf("\n");
				i = jumlah;
			}
			else
			{
				printf(" ");
			}
		}
		else if(m == 1)
		{
			count++;
			if(count == jumlah/row)
			{
				printf("\n");
				count = 0;
				i = row1;
				i -= row;
				row1++;
			}
			else
			{
				printf(" ");
			}
		}
		else
		{
			if(i+row>=jumlah)
			{
				if(i==jumlah-1)
				{
					m = 1;
				}
				printf("\n");
				i = row1;
				i -= row;
				row1++;
			}
			else
			{
				printf(" ");
			}
		}
	}
}
int main()
{
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		count = 0;
		m = 0;
		scanf("%d %d",&jumlah,&row);
		for(i=0;i<jumlah;i++)
		{
			scanf("%lld",&angka[i]);
		}
		sorting();
		printf("Case #%d:\n",k);
		cetak();
	}
	return 0;
}
