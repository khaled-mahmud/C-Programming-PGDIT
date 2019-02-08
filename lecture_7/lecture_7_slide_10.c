#include <stdio.h>

int main()
{
    int value;
    scanf("%d", &value);

    switch (value)
    {

        case 1:
            printf("1 received\n");
            break;

        case 2:
            printf("2 received\n");
            break;

        default:
            printf("values received except 1 and 2 were received\n");
            break;

    }

    return 0;
}
