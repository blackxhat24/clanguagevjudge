#include <stdio.h>
int main()
{
	int height = 0;
	int width = 0;
	int i, j;
	int kasus,k;
	scanf("%d", &kasus);
	for(k=1;k<=kasus;k++)
	{
	scanf("%d %d", &height, &width);
	printf("Case #%d:\n", k);
	for(i=0;i!=height;i++){
		for(j=0;j!=width;j++)
		{
			if(i == 0 ||i == height-1 || j == width-1 || j == 0)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		}
	}
	return 0;
}
