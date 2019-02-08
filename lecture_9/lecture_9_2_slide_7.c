#include <stdio.h>

void bubbleSort(int A[], int N);

int main()
{
	int i;
	int a[5]={5,1,4,2,8};
	bubbleSort(a,5);
	for (i=0;i<5;i++)
		printf("%d\n",a[i]);

	return 0;
}

void bubbleSort(int A[], int N)
{
	int temp,i, j;
	for (i=N-1;i>=1;i--)
		for (j=1;j<=i;j++)
			if (A[j-1]>A[j]) {
				temp=A[j-1];
				A[j-1]=A[j];
				A[j]=temp;
			}
}
