// start program
#include "/Users/zamirlatta/tmcs_/tmcs-m/lib/start.h"
#include <stdio.h>

int start(int startVal)
{
    printf("Press 1 (white) or 2 (black) to Start Game:\n");
    startVal = scanf("%d", &startVal);
    printf("%d", startVal);
    while (startVal != 1 || startVal != 2)
    {
        printf("invalid choice!");
        startVal = scanf("%d", startVal);
    }
    int start = startVal;
    //printf("test");
    return startVal;
}