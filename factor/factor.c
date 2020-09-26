#include <stdio.h>

int main()
{
	int k,kasus;
	int angka,i,j,temp[1001],count;
	long long unsigned faktor=1;
	
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d",&angka); 
        printf("Case #%d:\n",k);
        for(i=0;i<1001;i++)
        {
        	temp[i]=0;
    	}
    	for(j=1;j<=angka;j++)
    	{
    		faktor=j;
        	for(i=1;i<=faktor;i++)
			{
				int i = 2;
				while(faktor!=1)
				{
					if(faktor%i==0)
					{
						while(faktor%i==0)
						{
							temp[i]++;
							faktor=faktor/i;
						}
					}
					i++;
				}	
			}
		}
		for(i=1;i<=angka;i++)
		{
			if(temp[i] !=0)
			{
				printf("%d %d\n",i,temp[i]);
			}
		}
    }
	return 0;
}
