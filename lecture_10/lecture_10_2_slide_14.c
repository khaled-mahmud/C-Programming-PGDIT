#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE 81

int main()
{
	float sum = 0;
	int count = 0;
	char num[MAX_LINE];

	printf("get price : \n");
	while (gets(num) != NULL) {
		count++;
		sum = sum + atof(num);
	}
	printf(" %d items , Sum : %6.2f \n", count, sum);

	return 0;
}
