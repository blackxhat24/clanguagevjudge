#include <stdio.h>
int main()
{
	int k,kasus;
	int x,y,z,m,n,p;
	int x1=1,x2=1,y1,y2,h1,h2;
	int bibi,jojo,total;
	
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d %d %d %d %d %d",&x,&y,&z,&m,&n,&p);
		h1=m*x-x;
		h2=n*y-y;
		jojo = (x1*y2)-(x2*(m*-1));
		bibi = ((m*-1)*(n*-1))-((n*-1)*(m*-1));
		total = (h1*(n*-1))-(h2*(m*-1));
		jojo = total/jojo;
		jojo = (x1*x2)-(x2*x1);
		bibi = ((m*-1)*x2)-((n*-1)*x1);
		total = (h1*x2)-(h2*x1);
		bibi = total/bibi;
		if(jojo*m+x == jojo*p+z || jojo*n+y == jojo*p+z)
		{
			printf("Case #%d: ",k);
			printf("YES\n");
		}
		else
		{
			printf("Case #%d: ",k);
			printf("NO\n");
		}
	}
	return 0;
}
