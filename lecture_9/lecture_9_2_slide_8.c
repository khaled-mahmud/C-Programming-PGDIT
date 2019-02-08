#include <stdio.h>

int binsearch(int a[], int N, int v);

int main()
{
	int position;
	int a[5]={1,2,4,5,8};
	position = binsearch(a, 5, 2);
	printf("%d\n",position);

	return 0;
}

int binsearch(int a[], int N, int v)
{
	int l=0; int r=N-1; int x;
	while (r>=l) {
		x=(l+r)/2;
		if (v<a[x]) r=x-1;
		else l=x+1;
		if (v==a[x]) return x;
	}
	return -1;
}
