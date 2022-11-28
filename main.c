#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money;
    scanf("%d", &money);

    printf("%d note of 500 \n", money / 500);
    money = money % 500;

    printf("%d notes of 100 \n", money / 100);
    money = money % 100;

    printf("%d notes of 5 \n", money/5);

    return 0;
}
