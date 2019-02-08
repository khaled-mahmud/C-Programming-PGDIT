#include <stdio.h>

void myFunction(int yourArray[], int n);

int main ()
{
    int i;
    int myArray[4] = {0};
    myFunction( myArray, 4);
    for (i = 0; i < 4; i++)
        printf("%d\n",myArray[i]);
    return 0;
}

void myFunction (int yourArray[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        yourArray[i] = i;
}
