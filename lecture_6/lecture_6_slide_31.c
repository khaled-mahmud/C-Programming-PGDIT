#include <stdio.h>

int main()
{
    int score;
    printf("Score?");
    scanf("%d", &score);

    if (score >= 90 && score <=100)
        printf("your grade is A.\n");
    if (score >= 80 && score < 90)
        printf("your grade is B.\n");
    if (score >= 70 && score < 80)
        printf("your grade is C.\n");
    if (score >=60 & score < 70)
        printf("your grade is D.\n");
    if (score <60 )
        printf("your grade is F.\n");

    return 0;

}
