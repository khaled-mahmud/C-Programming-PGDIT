#include <stdio.h>

int main()
{
    int total = 0, count = 0;
    float average;

    printf("score input (quit:0): \n");
    scanf("%d", &score);

    while(score != 0){
        total += score;
        count++;
        scanf("%d", &score);
    }

    if (count == 0){
        printf("No input received!");
    }else{
        average = (float) total/count;
        printf("total: %d\n", total);
        printf("average: %5.2f \n", average);
    }
    return 0;
}
