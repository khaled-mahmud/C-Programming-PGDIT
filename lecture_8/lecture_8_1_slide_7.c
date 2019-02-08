#include <stdio.h>

void useLocalScope(void);
void useStaticLocalScope(void);
void useGlobalScope(void);

int x = 1;

int main()
{
    int x = 5;
    printf("local x in main's outer block is %d\n",x);

    {

        int x = 7;
        printf("local x in main's inner block is %d\n",x);

    }

    printf("local x in main's outer block is %d\n",x);

    useLocalScope();
    useStaticLocalScope();
    useGlobalScope();
    useLocalScope();
    useStaticLocalScope();
    useGlobalScope();

    printf("\nlocal x in main’s outer block is %d\n",x);

    return 0;
}

void useLocalScope( void )
{
    int x = 25;

    printf("local x is %d on entering useLocalScope()\n",x);
    ++x;
    printf("local x is %d on exiting useLocalScope()\n",x);

}

void useStaticLocalScope( void )
{
    static int x = 50;

    printf("local static x is %d on entering useStaticLocalScope()\n",x);

    ++x;                                         // increment x

    printf("local static x is %d on exiting useStaticLocalScope()\n",x);

}

void useGlobalScope( void )
{
	printf("global x is %d on entering useGlobalScope()\n",x);
	x *= 10;
	printf("global x is %d on exiting useGlobalScope()\n",x);

}
