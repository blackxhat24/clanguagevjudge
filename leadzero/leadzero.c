#include <stdio.h>
#include <string.h>

int main()
{
	char batas[30];
	int b,i;
	scanf("%s", &batas);
	b = strlen(batas);
	for(i=b;b<30;b++)
	{
		printf("0");
	}
	printf("%s\n", batas);
}
