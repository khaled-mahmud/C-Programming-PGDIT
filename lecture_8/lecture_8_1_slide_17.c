#include <stdio.h>
#include <math.h>

int main()
{
	double c, a, b;
	scanf("%lf %lf",&a,&b);
	c=sqrt(pow(a,2)+pow(b,2));
	printf("a^2+b^2=%lf\n",c);
	return 0;
}
