#include <stdio.h>
int main()
{
	int k,kasus;
	int row;
	int column;
	int hitung;
	int i,j;
	int count;
	char input[10][10];
	scanf("%d", &kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d %d",&row,&column);
		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				scanf(" %c", &input[i][j]);
			}
		}
		for(i=0;i<row;i++){
			hitung = 0;
			for(j=0;j<column;j++)
			{
				if(input[i][j] == 46)
				{
					hitung++;
				}
				else;
			}
			if(hitung == column)
			{
				for(j=0;j<column;j++){
					input[i][j]= 48;
				}
			}
			else;
		}
		for(j=0;j<column;j++){
			hitung = 0;
			for(i=0;i<row;i++)
			{
				if(input[i][j] == 46 || input[i][j] == 48)
				{
					hitung++;
				}
				else;
			}
			if(hitung == row)
			{
				for(i=0;i<row;i++){
					input[i][j]= 48;
				}
			}
			else;
		}
		count = 0;
		for(i=0;i<row;i++){
			for(j=0;j<column;j++)
			{
				if(input[i][j] == 48)
				{
					count++;
				}
			}
		}
		printf("Case #%d: %d\n",k, count);
	}
	return 0;
}
