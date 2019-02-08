#include <stdio.h>

void printIntVar(char *name, int value)
{
    printf("%s\t = %d\n", name, value);
}

int main()
{
    int one = 1;
    int *to_one;

    to_one = &one;
    printIntVar("one", one);
    *to_one = one + 1;
    printIntVar("one", one);
    *to_one = *to_one + 1;
    printIntVar("one", one);
    (*to_one)++;
    printIntVar("one", one);

    return 0;
}
