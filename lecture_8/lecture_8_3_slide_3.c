#include <stdio.h>

int fcn1 (int local_int)
{
	int x;
	x = fcn2(local_int * 2);
	return (x - 3);
}

int fcn2 (int local_int2)
{
	int y = local_int2 - 85;
	return y;
}

int main()
{
	int z;
	z = fcn1 (10);
	printf("%d\n",z);
	return 0;
}
