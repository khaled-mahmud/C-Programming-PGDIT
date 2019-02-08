#include <stdio.h>

int main()
{
    int num1, num2, num3, min=0;

    printf("input three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num3)
        if (num1<num3)
            min=num1;
        else
            min=num3;
    else
        if (num2 < num3)
            min = num2;
        else
            min = num3;
    printf("min value: %d", min);
    return 0;
}
