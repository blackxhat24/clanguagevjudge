#include <stdio.h>

int hitung(int a[],int pivot,int i,int b)
{
	int bawah =0,atas= pivot-1,mid=0;
	int hasil = -1;
	while(bawah<=atas)
	{
		mid = (bawah+atas)/2;
		if(i == a[mid])
		{
			hasil = mid;
			if(b)
			{
				atas = mid - 1;
			}
			else
			{
				bawah = mid +1;
			}
		}
		else if(i < a[mid])
		{
			atas = mid - 1;
		}
		else
		{
			bawah = mid + 1;
		}
	}
	return hasil;
}
int main()
{
	int k,kasus,angka[100000],i,a,b,count = 0,cari,input;
	
	scanf("%d %d",&input,&kasus);
	for(i=0;i<input;i++)
	{
		scanf("%d",&angka[i]);
	}
	for(k=1;k<=kasus;k++)
	{
		scanf("%d",&cari);
		a = hitung(angka,input,cari,1);
		b = hitung(angka,input,cari,0);
		count = b - a + 1;
		if(a != -1)
		{
			printf("%d\n",count);
		}
		else
		{
			printf("0\n");
		}	
	}
	return 0;
}
