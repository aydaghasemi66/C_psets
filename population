#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int s_size;
    do
    {
        s_size = get_int("Enter the start size (at least 9): ");
    }
    while (s_size < 9);

    // Prompt for end size
    int e_size;
    do
    {
        e_size = get_int("Enter the end size: ");
    }
    while (e_size < s_size);

    // Calculate number of years until we reach threshold
    int years = 0;
    while (s_size < e_size)
    {
        s_size = s_size + (s_size / 3) - (s_size / 4);
        years++;
    }

    // Print number of years
    printf("Years: %i\n", years);
}
