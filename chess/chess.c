#include <stdio.h>

char catur[9][9];
char temp[9][9]={0};
int i,j;

void pawn()
{ 		
	if(catur[i-1][j+1] >= 'a' && catur[i-1][j+1] <= 'z' && i-1 >= 0 && j+1 >=0 && i-1 <8 && j+1 <8)
	{
		temp[i-1][j+1]=catur[i-1][j+1];
	}
	if(catur[i-1][j-1] >= 'a' && catur[i-1][j-1] <= 'z'&& i-1 >= 0 && j-1 >=0 && i-1 <8 && j-1 <8)
	{
		temp[i-1][j-1]=catur[i-1][j-1];
	}
	//clear
}
void rook()
{
	int a=0;
	
	for(a=i;a<8;a++)
	{
		if(catur[a+1][j] >= 'a' && catur[a+1][j] <= 'z')
		{
			temp[a+1][j] = catur[a+1][j];
//			printf("%d %d",a+1,j);
			break;
		}
		else if(catur[a+1][j] >= 'A' && catur[a+1][j] <= 'Z')
		{
			break;
		}
		else
		{
			continue;
		}
	}
	for(a=i;a>=0;a--)
	{
		if(catur[a-1][j] >= 'a' && catur[a-1][j] <= 'z')
		{
			temp[a-1][j] = catur[a-1][j];
//			printf("%d %d",a-1,j);
			break;
		}
		else if(catur[a-1][j] >= 'A' && catur[a-1][j] <= 'Z')
		{
			break;
		}
		else
		{
			continue;
		}
	}	
	for(a=j;a<8;a++)
	{
		if(catur[i][a+1] >= 'a' && catur[i][a+1] <= 'z')
		{
			temp[i][a+1] = catur[i][a+1];
//			printf("%d %d",i,a+1);
			break;
		}
		else if(catur[i][a+1] >= 'A' && catur[i][a+1] <= 'Z')
		{
			break;
		}
		else
		{
			continue;
		}
	}	
	for(a=j;a>=0;a--)
	{
		if(catur[i][a-1] >= 'a' && catur[i][a-1] <= 'z')
		{
			temp[i][a-1] = catur[i][a-1];
//			printf("%d %d",i,a-1);
			break;
		}
		else if(catur[i][a-1] >= 'A' && catur[i][a-1] <= 'Z')
		{
			break;
		}
		else
		{
			continue;
		}
	}	
}
void bishop()
{
	int a,b;
	
	a=i;
	b=j;
	
	while (a>0)
	{
		while (b<7)
		{
			if (catur[a-1][b+1] >= 97 && catur[a-1][b+1] <= 122)			
			{
				temp[a-1][b+1]=catur[a-1][b+1];
				b++;
				break;
			}
			else 
			{
				b++;
				break;
			}
		}
		a--;
		if ( catur[a][b] != '.')
		{
			break;
		}
	}
	
	a=i;
	b=j;
	
	while (a>0)
	{
		while (b>0)
		{
			if (catur[a-1][b-1] >= 97 && catur[a-1][b-1] <= 122)			
			{
				temp[a-1][b-1] = catur[a-1][b-1];
				b--;
				break;
			}
			else 
			{
				b--;
				break;
			}
		}
		a--;
		if ( catur[a][b] != '.')
		{
			break;
		}
	}
	
	a=i;
	b=j;
	
	while (a<7)
	{
		while (b<7)
		{
			if (catur[a+1][b+1] >= 97 && catur[a+1][b+1] <= 122)			
			{
				temp[a+1][b+1] = catur[a+1][b+1];
				b++;
				break;
			}
			else 
			{
				b++;
				break;
			}
		}
		a++;
		if ( catur[a][b] != '.')
		{
			break;
		}
	}
	
	a=i;
	b=j;
	
	while (a<7)
	{
		while (b>0)
		{
			if (catur[a+1][b-1] >= 97 && catur[a+1][b-1] <= 122 )
			{
				temp[a+1][b-1] = catur[a+1][b-1];
				b--;
				break;
			}
			else 
			{
				b--;
				break;
			}
		}
		a++;
		if (catur[a][b] != '.')
		{
			break;
		}
	}
}
void king()
{
	if(catur[i-1][j+1] >= 'a' && catur[i-1][j+1] <= 'z' )
	{
		temp[i-1][j+1]=catur[i-1][j+1];
	}
	if(catur[i-1][j-1] >= 'a' && catur[i-1][j-1] <= 'z')
	{
		temp[i-1][j-1]=catur[i-1][j-1];	
	}
	if(catur[i][j+1] >= 'a' && catur[i][j+1] <= 'z' )
	{
		temp[i][j+1]=catur[i][j+1];
	}
	if(catur[i][j-1] >= 'a' && catur[i][j-1] <= 'z')
	{
		temp[i][j-1]=catur[i][j-1];
	}
	if(catur[i-1][j] >= 'a' && catur[i-1][j] <= 'z' )
	{
		temp[i-1][j]=catur[i-1][j];
	}
	if(catur[i+1][j] >= 'a' && catur[i+1][j] <= 'z')
	{
		temp[i+1][j]=catur[j+1][j];
	}
	if(catur[i+1][j+1] >= 'a' && catur[i+1][j+1] <= 'z' )
	{
		temp[i+1][j+1]=catur[i+1][j+1];
	}
	if(catur[i+1][j-1] >= 'a' && catur[i+1][j-1] <= 'z')
	{
		temp[i+1][j-1]=catur[i+1][j-1];
	}
	
}
void knight()
{
	if(catur[i-1][j+2] >= 'a' && catur[i-1][j+2] <= 'z' && i-1 >= 0 && j+2 >=0 && i-1 <8 && j+2 <8)
	{
		temp[i-1][j+2]=catur[i-1][j+2];
	}
	if(catur[i-1][j-2] >= 'a' && catur[i-1][j-2] <= 'z'&& i-1 >= 0 && j-2 >=0 && i-1 <8 && j-2 <8)
	{
		temp[i-1][j-2]=catur[i-1][j-2];	
	}
	if(catur[i-2][j+1] >= 'a' && catur[i-2][j+1] <= 'z'&& i-2 >= 0 && j+1 >=0 && i-2 <8 && j+1 <8)
	{
		temp[i-2][j+1]=catur[i-2][j+1];
	}
	if(catur[i-2][j-1] >= 'a' && catur[i-2][j-1] <= 'z'&& i-2 >= 0 && j-1 >=0 && i-2 <8 && j-1 <8)
	{
		temp[i-2][j-1]=catur[i-2][j-1];	
	}
	if(catur[i+1][j+2] >= 'a' && catur[i+1][j+2] <= 'z' && i+1 >= 0 && j+2 >=0 && i+1 <8 && j+2 <8)
	{
		temp[i+1][j+2]=catur[i+1][j+2];
	}
	if(catur[i+1][j-2] >= 'a' && catur[i+1][j-2] <= 'z'&& i+1 >= 0 && j-2 >=0 && i+1 <8 && j-2 <8)
	{
		temp[i+1][j-2]=catur[i+1][j-2];	
	}
	if(catur[i+2][j+1] >= 'a' && catur[i+2][j+1] <= 'z' && i+2 >= 0 && j+1 >=0 && i+2 <8 && j+1 <8)
	{
		temp[i+2][j+1]=catur[i+2][j+1];
	}
	if(catur[i+2][j-1] >= 'a' && catur[i+2][j-1] <= 'z'&& i+2 >= 0 && j-1 >=0 && i+2 <8 && j-1 <8)
	{
		temp[i+2][j-1]=catur[i+2][j-1];	
	}
}

int main()
{
	int k,kasus;
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				scanf(" %c",&catur[i][j]);
			}
		}
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				if(catur[i][j] == 'P')
				{
					pawn();
				}
				else if(catur[i][j] == 'R')
				{
					rook();
				}
				else if(catur[i][j] == 'B')
				{
					bishop();
				}
				else if(catur[i][j] == 'Q')
				{
					bishop();
					rook();
				}
				else if(catur[i][j] == 'K')
				{
					king();
				}
				else if(catur[i][j] == 'N')
				{
					knight();
				}
			}
		}
		printf("Case #%d:\n",k);
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				if(temp[i][j] != 0)
				{
					printf("%c ",j+65);
					if(i == 0)
					{
						printf("8\n");
					}
					if(i == 1)
					{
						printf("7\n");
					}
					if(i == 2)
					{
						printf("6\n");
					}
					if(i == 3)
					{
						printf("5\n");
					}
					if(i == 4)
					{
						printf("4\n");
					}
					if(i == 5)
					{
						printf("3\n");
					}
					if(i == 6)
					{
						printf("2\n");
					}
					if(i == 7)
					{
						printf("1\n");
					}
				}
			}
		}
//		for(i=0;i<8;i++)
//		{
//			for(j=0;j<8;j++)
//			{
//				printf("%c",temp[i][j]);
//			}
//			printf("\n");
//		}
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				temp[i][j]= 0;
			}
		}
	}
}
