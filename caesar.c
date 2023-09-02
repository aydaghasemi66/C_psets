#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    string ptext = get_string("plaintext:  ");
    int key = atoi(argv[1]);

    char co;
    int n = strlen(ptext);
    char cipher[n];

    for (int j = 0; j < n; j++)
    {
        int c = ptext[j];

        if (isalpha(c))
        {
            if (islower(c))
            {
                co = 'a' + (c - 'a' + key) % 26;
            }
            else if (isupper(c))
            {
                co = 'A' + (c - 'A' + key) % 26;
            }
        }
        else
        {
            co = c;
        }

        cipher[j] = co;
    }

    printf("ciphertext: %s\n", cipher);
    return 0
