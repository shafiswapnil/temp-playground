#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
        printf("Alphabet");
    }
    else if (ch >= '1' && ch <= '9') {
        printf("Digit");
    }
    else {
        printf("Special");
    }

    return 0;
}
