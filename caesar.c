#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Press <key> \n");
        return 1;
    }
    else
    {
        string ciphertext = GetString();
        int i = 0;
        int n = 0;
        int key = atoi(argv[1]);
        
        for (i = 0, n = strlen(ciphertext); i < n; i++)
        {
            if (isalpha(ciphertext[i]))
            {
                if (islower(ciphertext[i]))
                {
                    int a = (((ciphertext[i] - 97 + key) % 26) + 97);
                    printf("%c", a);
                }
                if (isupper(ciphertext[i]))
                {
                    int b = (((ciphertext[i] - 65 + key) % 26) + 65);
                    printf("%c", b);
                }
            }
            else
            {
                printf("%c", ciphertext[i]);
            }
        }
        printf("\n");
    }
}
