#include <stdio.h>
#include <string.h>

#define N 3

void readNxN(int a[N][N]);
void sumNxN(const int a[N][N], int rSum[N], int cSum[N]);
void printNxN(const int a[N][N], const int rSum[N], const int cSum[N]);

int main()
{
    int x[N][N];
    int rSum[N] = {0}, cSum[N] = {0};

    readNxN(x);
    sumNxN(x, rSum, cSum);
    printNxN(x, rSum, cSum);

    return 0;
}

void readNxN(int a[N][N])
{
    int i, j;
    printf("Input %d x %d integer matrix :\n", N, N);
    for (i = 0; i < N; ++i)
        for (j = 0; j < N; ++j)
            scanf("%d", & a[i][j]);
}

void sumNxN(const int a[N][N], int rSum[N], int cSum[N])
{
    int i, j;
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            rSum[i] += a[i][j];
            cSum[j] += a[i][j];
        }
    }
}

void printNxN(const int a[N][N], const int rSum[N], const int cSum[N])
{
    int i, j;
    const char *lseg = "-------";
    const int width = strlen(lseg) - 1;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j)
            printf("%*d ", width, a[i][j]);
        printf("| %*d\n", width, rSum[i]);
    }
    for (i = 0; i < 3; ++i)
        printf("%s", lseg);
    printf("+\n");
    for (i = 0; i < 3; ++i)
        printf("%*d ", width, cSum[i]);
    printf("\n");
}

