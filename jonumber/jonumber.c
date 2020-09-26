#include <stdio.h>
#include <math.h>

int check_angka(int a)
{
	int counta,countb,temp,temp2,temp1,tempa,j, count=0;
	for(j = 1; j<=sqrt(a);j++)
	{
		counta = 0;
		countb = 0;
		if(a%j == 0)
		{
			temp = j;
			while(temp>0)
			{
				temp1 = temp % 10;
				if(temp1 != 7 && temp1 != 8)
				{
					counta = 1;
				}
				temp /= 10;
			}
			if(counta == 0)
			{
				count++;
			}
			tempa = a/j;
			while(tempa>0)
			{
				temp2 = tempa % 10;
				if(temp2 != 7 && temp2 != 8)
				{
					countb = 1;
				}
				tempa /= 10;
			}
			if(countb == 0)
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int k,kasus;
	long long a;
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d",&a);
		printf("Case #%d: ",k);
		if(check_angka(a)>0 || a == 7 || a == 8)
		{
			printf("YES\n");
		}
		else if(check_angka(a) == 0)
		{
			printf("NO\n");
		}
	}
	return 0;
}
