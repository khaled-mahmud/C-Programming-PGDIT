#include <stdio.h>

int main()
{
    int x0, x1, x2, x3, x4;

    printf("Get 5 integers : ");
    scanf("%d", &x0);
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    scanf("%d", &x4);

    printf("Reverse Order : ");
    printf("%d ", x4);
    printf("%d ", x3);
    printf("%d ", x2);
    printf("%d ", x1);
    printf("%d ", x0);
    printf("\n");

    return 0;
}
