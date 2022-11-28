#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    int feet, inch;

    printf("enter height (inch): \n");
    scanf("%d", &height);

    feet = height / 12;
    inch = height % 12;

    printf("%d feet %d inch\n", feet, inch);

    return 0;
}
