#include <stdio.h>
int main()
{
    int r, c;

    for (r = 0; r <= 5; r++)
    {
        for (c = 1; c <= 34; c++)
        {
            if ((c >= 6 - r && c < 12 + r) || (c >= 24 - r && c <= 30 + r))
                printf("*");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (r = 0; r < 18; r++)
    {
        for (c = 1; c <= 34; c++)
        {
            if (c >= r + 1 && c <= 34 - r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}