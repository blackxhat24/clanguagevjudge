#include <stdio.h>

int main()
{
	int k,kasus,angka,input[101],i,j,temp1=0,temp2=0,temp3=0,a=0,b=0,c=0;
	
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d",&angka);
		for(i=0;i<angka;i++)
		{
			scanf("%d",&input[i]);
		}
		for(i=0;i<angka;i++)
		{
			for(j=i+1;j<angka;j++)
			{
				b = input[i];
				c = input[j];
				while(b != 0 && c != 0)
				{
					if(b<c)
					{
						temp1 = b;
						b = c;
						c = temp1;
					}
					b = b%c;
				}
				if(b == 0 && c != 0)
				{
					temp2 = c;
				}
				else
				{
					temp3 = b;
				}
				if(temp2 > temp3)
				{
					temp3 = temp2;
				}
			}
		}
		printf("Case #%d: %d\n",k,temp3);
		temp3 =0;
	}
}
