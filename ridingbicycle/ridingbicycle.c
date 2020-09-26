#include <stdio.h>
#include <math.h>

int main()
{
	int k,kasus,i;
	float km,jam,hour,temp,menit,minute,kec;
	
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%f %f %f:%f",&kec,&km,&jam,&menit);
		printf("Case #%d: ",k);
		km /= kec;
		hour = km/1;
		jam = jam - ceil(hour);
		while(jam < 0)
		{
			jam = jam + 24;
		}
		while(jam >= 24)
		{
			jam = jam - 24;
		}
		if(jam>=0 && jam <10)
		{
			printf("0%1.f:",jam);
		}
		else
		{
			printf("%1.f:",jam);
		}
		minute = km;
		while(minute > 1)
		{
			minute--;
		}
		minute = minute*60;
//		printf("%f\n",minute);
		menit = menit - ceil(minute);
		if(menit < 0)
		{
			menit = menit + 60;
		}
		if(menit >= 0 && menit<10)
		{
			printf("0%1.f\n",menit);
		}
		else
		{
			printf("%1.f\n",menit);
		}
	}
	return 0;
}
