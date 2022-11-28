#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time;
    int process, hour, minute, second;

    printf("enter time: \n");
    scanf("%d", &time);

    process = time / 60;
    hour = process / 60;
    minute = process % 60;
    second = time % 60;

    printf("%d hour %d minute %d second\n", hour, minute, second);

    return 0;
}
