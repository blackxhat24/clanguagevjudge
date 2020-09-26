#include <stdio.h>
int main()
{
	int n = 1;
	int process,q;
	int input;
	scanf("%d", &process);
	for(q=1;q<=process;q++)
	{
	n = n*2+1;
	}
	printf("%d\n", n);
}
