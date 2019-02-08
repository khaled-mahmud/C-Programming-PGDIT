#include <stdio.h>

int main()
{
    int x = 10;
    int y = 11;

    printf("(%d > %d) = %d \n", x, y, x>y);
    printf("(%d >= %d) = %d\n", x, y, x >= y);
    printf("(%d == %d) = %d\n", x, y, x == y);
    printf("(%d != %d) = %d\n", x, y, x != y);
    printf("(%d < %d) = %d \n", x, y, x < y );
    printf("(%d <= %d) = %d\n", x, y, x <= y);

    return 0;
}
