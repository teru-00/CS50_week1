#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++) // ----------------------------------------- row
    {
        for (int j = 0; j < n; j++) // ---------------------------------- column
        {
            if (j  > n - i - 2)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}