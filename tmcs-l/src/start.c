// start program
#include "/home/zmr_4c/tmcs/tmcs-l/lib/start.h"
#include <stdio.h>

int start(void)
{
    printf("Press 1 (white) or 2 (black) to Start Game:\n");
    int startVal = scanf("%d", &startVal);
    printf("%d \n", startVal);
    if (startVal != 1 && startVal != 2) {
        printf("invalid choice!");
        startVal = scanf("%d", &startVal);
        printf("%d", startVal);
    }
    return startVal;
}