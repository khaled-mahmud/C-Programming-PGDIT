#include <stdio.h>

int main()
{
    int x[] = {1, 3, 5, 7, 9};

    printf("           x = %8u\n", x);
    printf("   sizeof(x) = %8d\n", sizeof x);
    printf("sizeof(x[0]) = %8d\n", sizeof x[0]);

    return 0;
}
