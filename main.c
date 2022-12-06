#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int input;
    scanf("%d", &input);

    if (input > 0) {
        if (ceil(log2(input)) == floor(log2(input))) {
            printf("Yes");
        }
    }
    else if (input == 0) {
        printf("Zero is not a valid input");
    }
    else if (input < 0) {
        printf("Negative is not valid input");
    }
    else {
        printf("No");
    }

    return 0;
}
