#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

bool verification(char *key);
char substitute(char character, char *key);

int main(int argc, char *argv[])
{
    if (argc != 2 || !verification(argv[1]))
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    char plaintext[MAX];
    char *key = argv[1];

    printf("plaintext: ");
    fgets(plaintext, MAX, stdin);

    int length = strlen(plaintext);
    char ciphertext[length + 1]; 

    for (int i = 0; i < length; i++)
    {
        if (isalpha(plaintext[i]))
        {
            ciphertext[i] = substitute(plaintext[i], key);
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }
    ciphertext[length] = '\0'; 

    printf("ciphertext: %s\n", ciphertext);

    return 0;
}

bool verification(char *key)
{
    int length = strlen(key);

    if (length != 26)
    {
        printf("The key must contain exactly 26 characters.\n");
        return false;
    }

    for (int i = 0; i < length; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("The key must contain only alphabetic characters.\n");
            return false;
        }

        for (int j = i + 1; j < length; j++)
        {
            if (tolower(key[i]) == tolower(key[j]))
            {
                printf("The key must contain 26 different characters.\n");
                return false;
            }
        }
    }

    return true;
}

char substitute(char character, char *key)
{
    if (isupper(character))
    {
        return toupper(key[character - 'A']);
    }
    else if (islower(character))
    {
        return tolower(key[character - 'a']);
    }
    return 2; 
}
