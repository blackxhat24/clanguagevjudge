#include <stdio.h>

int strlen(char input[])
{
	int count = 0;
	while(input[count] != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	int kasus,k,temp[26],check,i;
	char input[1000];
	
	FILE *fp;
	fp = fopen("testdata.in","r");
	fscanf(fp, "%d\n",&kasus);
	for(k=1;k<=kasus;k++)
	{
		check = 0;
		for(i=0;i<26;i++)
		{
			temp[i]=0;
		}
		fscanf(fp,"%[^\n]\n",input);
		for(i=0;i<strlen(input);i++)
		{
			if(input[i] <= 90 && input[i] >=65)
			{
				temp[input[i]-65]++;
			}
			if(input[i] <= 122 && input[i] >=97)
			{
				temp[input[i]-97]++;
			}
		}
		printf("Case #%d:\n",k);
		for(i=0;i<26;i++)
		{
			printf("%c : %d",i+65,temp[i]);
			check++;
			if(check == 5 || i == 25)
			{
				printf("\n");
				check = 0;
			}
			else
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	fclose(fp);
	return 0;
}
