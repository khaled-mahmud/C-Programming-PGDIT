#include <stdio.h>

#define MAX(x, y) (x > y)? x: y

int main()
{
    int i, j;
    int max;

    printf("get two integers : ");
    scanf("%d %d", &i, &j);
    max = MAX(i, j);
    printf("MAX(%d, %d) = %d\n", i, j, max);

    return 0;
}
