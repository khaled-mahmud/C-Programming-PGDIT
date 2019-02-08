#include <stdio.h>

int main()
{
    int res;
    res = 11;
    res += 4;
    printf("\nResult of Ex1 = %d", res);

    //res = 11;
    res -= 4;
    printf("\nResult of Ex2 = %d",res);

    //res = 11;
    res *=4;
    printf("\nResult of Ex3 = %d", res);

    //res = 11;
    res /= 4;
    printf("\nResult of Ex4 = %d", res);

    //res = 11;
    res %= 4;
    printf("\nResult of Ex5 = %d", res);

    return 0;
}
