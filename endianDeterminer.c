#include <stdio.h>

int main()
{
    int testNum = 1;
    char *p = (char *)&testNum;

    if (*p) {
        printf("Your computer is little-endian\n");
    }
    else {
        printf("Your computer is big-endian\n");
    }
    return 0;
}