#include <stdio.h>
int main()
{
	float x,y,h,x1,x2,y1,y2,h1,h2;
	int k,kasus;
	scanf("%d", &kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%f %f %f", &x1,&y1,&h1);
		scanf("%f %f %f", &x2,&y2,&h2);
		printf("Case #%d:\n",k);
		x = (x1*y2)-(x2*y1);
		y = (y1*y2)-(y2*y1);
		h = (h1*y2)-(h2*y1);
		x = h/x;
		printf("x = %.4f\n",x);
		x = (x1*x2)-(x2*x1);
		y = (y1*x2)-(y2*x1);
		h = (h1*x2)-(h2*x1);
		y = h/y;
		printf("y = %.4f\n",y);	
	}
}
