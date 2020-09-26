#include <stdio.h>

int main()
{
	int i,j,k;
	int jumlah,angka;
	scanf("%d", &jumlah);
	for(k=1;k<=jumlah; k++)
	{
		scanf("%d",&angka);
		printf("Case #%d:\n", k);	
		int prima[angka+1];
	
		for(i = 2; i<=angka; i++)
			prima[i] = i;
		
		i = 2;
		while((i*i) <= angka)
		{
			if(prima[i] != 0)
			{
				for(j=2;j<angka;j++)
				{ 			
					if(prima[i]*j > angka)
						break;
					else
						prima[prima[i]*j]=0;
				}
			}
			i++;
		}
		
	for(i = 2; i<=angka; i++)
	{
		if(prima[i]!=0)
			printf("I will become a good boy.\n");
	}
	}
	return 0;
}
