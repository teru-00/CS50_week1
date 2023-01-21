#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n; // ------------------------------------------- number of current size
    int e; // ----------------------------------------------- number of end size

    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);

    // TODO: Prompt for end size
    do
    {
        e = get_int("End size: ");
    }
    while (e < n);

    // TODO: Calculate number of years until we reach threshold
    int i;
    for (i = 0; ; i++)
    {
        if (n >= e)
        {
            break;
        }
        n = n + (n / 3) - (n / 4);
    }

    // TODO: Print number of years
    printf("Years: %i\n", i);
}
