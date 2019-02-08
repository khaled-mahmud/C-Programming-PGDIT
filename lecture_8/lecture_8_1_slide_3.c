#include <stdio.h>

int f(int val);


int main()
{
	int x;
	int y;
	scanf("%d",&x);
	y = f(x);
	printf("y=%d", y);
	return 0;
}

int f(int val)
{
	int k;
	k = 2 * val - 3;
	return k;
}
