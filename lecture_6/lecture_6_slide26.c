#include <stdio.h>

int main()
{
    short a = 0x1f05;
    short b = 0x31a1;

    printf("%x & %x = %x \n",a,b, a&b);
    printf("%x | %x = %x \n",a,b, a|b);
    printf("%x ^ %x = %x \n",a,b, a^b);
    printf("~%x = %x \n",a, ~a);

    return 0;
}
