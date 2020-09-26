#include <stdio.h>

int main()
{
	int k,kasus;
	int lvl[1000];
	int max,min;
	int range;
	int i,j;
	int lvlmax;
	
	scanf("%d", &kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d %d", &range, &lvlmax);
		for(i=0;i<range;i++)
		{
			scanf("%ld", &lvl[i]);
		}
		max = lvl[0];
		min = lvl[0];
		printf("Case #%d: ", k);
		for(i=0;i<range;i++)
		{
			if (min > lvl[i])
			{
				min = lvl[i];
			}
			if (max < lvl[i+1])
			{
				max = lvl[i+1];
			}
		}
		if((max-min)<=lvlmax)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
