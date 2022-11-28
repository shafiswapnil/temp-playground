#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;

    printf("enter integer: \n");
    scanf("%d", &a);

    printf("enter float: \n");
    scanf("%f", &b);

    printf("%d %.2f", a, b);

    return 0;
}
