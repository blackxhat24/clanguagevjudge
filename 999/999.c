#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,d,e,f;
	scanf("%f %f %f", &a, &b, &c);
	d = a/999;
	e = b/999;
	f = c/999;
//	d = floor(d * 1000) / 1000;
//	e = floor(e * 1000) / 1000;
//	f = floor(f * 1000) / 1000;
	if(a == 111 || a == 222 || a == 333 || a == 444 || a == 555 || a == 666 ||a == 777 ||a == 888)
		{
			d = floor(d * 10) / 10;
			printf("%.1f...\n", d);
		}
		else
		{
			d = floor(d * 1000) / 1000;
			printf("%.3f...\n", d);
		}
	if(b == 111 || b == 222 || b == 333 || b == 444 || b == 555 || b == 666 ||b == 777 ||b == 888)
		{
			e = floor(e * 10) / 10;
			printf("%.1f...\n", e);
		}
		else
		{
			e = floor(e * 1000) / 1000;
			printf("%.3f...\n", e);	
		}
	if(c == 111 || c == 222 || c == 333 || c == 444 || c == 555 || c == 666 ||c == 777 ||c == 888)
		{
			f = floor(f * 10) / 10;
			printf("%.1f...\n", f);
		}
		else
		{
			f = floor(f * 1000) / 1000;
			printf("%.3f...\n", f);
		}
	return 0;
}
