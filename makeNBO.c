#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void makeNBO(int num)
{
    int networkByteOrder = htonl(num);
    printf("Host Byte Order: %d\n", num);
    printf("Network Byte Order: %d\n", networkByteOrder);
}