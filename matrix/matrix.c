#include <stdio.h>
int main()
{
	int k, kasus;
	int i,j;
	int row,colomn;
	int matrix;
	int input[128][128];
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d", &matrix);
		for(i=0;i<matrix;i++){
			for(j=0;j<matrix;j++){
			scanf("%d", &input[i][j]);
			}
		}
		printf("Case #%d:\n",k);
		printf("Row :");
		for(i=0;i<matrix;i++){
			row = input[i][0];
			for(j=0;j<matrix;j++){
				if(row<input[i][j])
				{
					row = input[i][j];
				}
			}
			printf(" %d",row);
		}
		printf("\n");
		printf("Col :");
		for(j=0;j<matrix;j++){
			colomn = input[0][j];
			for(i=0;i<matrix;i++){
				if(colomn<input[i][j])
				{
					colomn = input[i][j];
				}
			}
			printf(" %d",colomn);
		}
		printf("\n");
	}
	return 0;
}
