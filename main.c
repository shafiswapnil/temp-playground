#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    int meter, centimeter;

    printf("enter height (in cm): \n");
    scanf("%d", &height);

    meter = height/100;
    centimeter = height % 100;

    printf("Height = %d meter %d centimeter\n", meter, centimeter);

    return 0;
}
