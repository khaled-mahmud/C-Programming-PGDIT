#include <stdio.h>

int main()
{
    int num1 = 30;
    int num2 = 40;

    if(num1 >= 40 || num2 >= 50)
        printf("Or If Block Gets Executed\n");
    if(num1 >=20 && num2 >= 50)
        printf("And If Block Gets Executed\n");
    if(!(num1 >= 25))
        printf("Not If Block Gets Executed\n");

    return 0;
}
