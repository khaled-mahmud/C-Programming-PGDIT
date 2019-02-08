#include <stdio.h>

int main()
{
    int x[5], i;

    printf("Get 5 integers : ");
    for (i = 0; i < 5; ++i)
        scanf("%d", &x[i]);

    printf("Reverse order : ");
    for (i = 4; i >= 0; --i)
        printf("%d ", x[i]);
    printf("\n");

    return 0;
}
