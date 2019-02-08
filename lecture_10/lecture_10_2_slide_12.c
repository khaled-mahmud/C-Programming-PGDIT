#include <stdio.h>
#define MAX_LINE 81
#define MAX_WORD 21

int main()
{
    char str1[MAX_LINE] = "C programming", str2[MAX_LINE] = "language";
    char temp[MAX_LINE];

    puts(str1);
    puts(str2);
    printf("%s", str1);
    printf("%s\n", str2);

    sprintf(temp, "%s %s is beautiful\n", str1, str2);
    printf("%s", temp);

    return 0;
}
