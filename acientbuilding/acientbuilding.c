#include <stdio.h>
#define P 1000000007
int main()
{
	int k,kasus;
	long long  a,b,a1,a2,i,j,b1=1,b2=1,hasil;
	unsigned static long long temp1[100000001];
	unsigned static long long temp2[100000001];
	
	for(i=0;i<1000000;i++)
	{
		a1=2;
		b1=(b1%P)*(a1%P)%P;
		temp1[i]=b1%P;
	}
	for(j=0;j<1000000;j++)
	{
		a2=3;
		b2=(b2%P)*(a2%P)%P;
		temp2[j]=b2%P;
	}
	
	scanf("%d", &kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%lld %lld",&a,&b);
		i = a - 1;
		j = b - 1;
		hasil = ((temp1[i]%P)*(temp2[j]%P))%P;
		printf("%lld\n",hasil);
	}
	return 0;
}
