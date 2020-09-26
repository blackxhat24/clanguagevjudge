#include <stdio.h>
#include <math.h>

void waktu(float a,float b,int jam,int menit)
{
	int tempjam,hasil,jamfix,menitfix;
	float tempmenit;
	tempjam = (jam*60)+menit;
//	printf("%d\n",tempjam);
	tempmenit = (b/a)*60;
//	printf("%d\n",tempmenit);
	hasil = tempjam - ceil(tempmenit);
//	printf("%d\n",hasil);
	if(hasil < 0)
	{
		hasil += 1440;
	}
	jamfix = hasil/60;
//	printf("%d\n",jamfix);
	menitfix = hasil - (jamfix*60);
	printf("%02d:%02d\n",jamfix,menitfix);
}

int main()
{
	int k,kasus,jam,menit;
	float kec,km;
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%f %f %d:%d",&kec,&km,&jam,&menit);
		printf("Case #%d: ",k);
		if(jam>23 || jam < 0)
		{
			jam = 0;
		}
		if(menit>59 || menit < 0)
		{
			menit = 0;
		}
		waktu(kec,km,jam,menit);
	}
}
