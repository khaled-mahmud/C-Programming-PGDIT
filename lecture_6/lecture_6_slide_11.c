#include<stdio.h>

int main()
{
    int num;
    printf("ENter the Number: ");
    scanf("%d", &num);
    //printf("%d\n", num%2);
    if(num == 0){
        printf("Invalid Number");
    }
    else{
        (num%2==0)?printf("Even"):printf("Odd");
    }

    return 0;
}
