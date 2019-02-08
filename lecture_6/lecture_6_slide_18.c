#include <stdio.h>

int main()
{
    int a;
    int i=0, j=0;
    a= (++i) + (++j);
    printf("a is %d\n",a);
    int b;
    int x=0, y=0;
    b= (x++) + (y++);
    printf("b is %d\n",b);
    return 0;
}
