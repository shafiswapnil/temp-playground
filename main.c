#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u, a, t;
    int s;

    printf("u a t? \n");
    scanf("%d %d %d", &u, &a, &t);

    // equation : s = u*t + (0.5*a*(t*t))
    s = u*t + 0.5*a*t*t;

    printf("s = %d", s);

    return 0;
}
