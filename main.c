#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;

    scanf("%f",&a);

    float ceilN = ceil(a);
    float floorN = floor(a);

    printf("ceil = %f floor = %f", ceilN, floorN);

    return 0;
}
