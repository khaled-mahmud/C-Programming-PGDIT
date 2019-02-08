#include <stdio.h>

int main()
{
    /*ex1*/

    double xa=3.5;
    double y=2.7;

    double below_point;

    below_point = xa*y - (int)(xa*y);

    printf("%f\n", below_point);

    return 0;
    /*ex2*/
    double x=3.5;
    printf("integer number of a = %d\n",(int)x);
    return 0;
}
