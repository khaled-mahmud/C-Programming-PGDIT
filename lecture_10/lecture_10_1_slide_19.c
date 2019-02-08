#include <stdio.h>

int main()
{
    char *quote[] = {
        "To err is human, to forgive divine.",
        "To detect errors is compiler, to correct them is human.",
        "Time flies like an arrow, fruit flies like a banana."
    };
    int i;
    const int num = sizeof quote/sizeof *quote;

    for (i = 0; i < num; ++i)
        printf("%s\n", quote[i]);

    return 0;
}
