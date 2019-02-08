#include <stdio.h>

int count()
{
    static int n = 0;

    return ++n;
}

int main()
{
    int i;

    for (i = 0; i < 5; ++i)
        printf("count = %d\n", count());

    return 0;
}
