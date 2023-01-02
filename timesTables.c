#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tableValue, n;
    printf("\n Please enter your times tables size: ");
    scanf("%d", &n);

    for (int row = 2; row <= n; row++)
    {
        printf("\n  %2d", row);

        for (int column = 2; column <= n; column++)
        {
            tableValue = row * column;
            printf("  %3d", tableValue);
        }
    }
}