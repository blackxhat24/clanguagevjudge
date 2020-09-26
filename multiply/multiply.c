#include <stdio.h>
#define P 1000000007

int main()
{
	int k,kasus;
	int input=0;
	int sum=0;
	long long matrix[30][30];
	long long temp[30][30];
	long long hasil[30][30];
	int i,j,l,m;
	
	scanf("%d", &kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d", &input);
		for(i=0;i<input;i++){
			for(j=0;j<input;j++)
			{
				scanf("%lld", &matrix[i][j]);
			}
		}
		for(i=0;i<input;i++){
			for(j=0;j<input;j++)
			{
				hasil[i][j] = matrix[i][j];
			}
		}
		m=1;
		while(m<input){
		for(i=0;i<input;i++)
		{
			for(j=0;j<input;j++)
			{
				for(l=0;l<input;l++)
				{
					sum = ((sum%P)+((hasil[i][l] * matrix[l][j])%P))% P;
				}
				temp[i][j]= sum;
				sum = 0;
			}
		}
		for(i=0;i<input;i++)
		{
			for(j=0;j<input;j++)
			{
				hasil[i][j] = temp[i][j] % P;
			}
		}
		m++;
	}
	printf("Case #%d:\n",k);
	for(i=0;i<input;i++)
		{
			for(j=0;j<input;j++)
			{
				if(j == 0)
				{
					printf("%lld",hasil[i][j]);
				}
				else
				{
					printf(" %lld",hasil[i][j]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
