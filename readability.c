#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string str = get_string("Enter your text: ");
    float l = 0;
    float w = 0;
    float s = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]) != 0)
        {
            l++;
        }
        else if (str[i] == ' ' && str[i - 1] != '.' && str[i - 1] != '?')
        {
            w++;
        }
        else if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            s++;
            w++;
        }
    }

    float L = l * 100 / w;
    float S = s * 100 / w;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}




