#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int input;
    scanf("%d", &input);

    if (ceil(log2(input)) == floor(log2(input))) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
