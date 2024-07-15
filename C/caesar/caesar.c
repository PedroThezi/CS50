#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

bool is_number(char *string);
char formula(char character, int key);

int main(int argc, char *argv[])
{
    if (argc != 2 || !is_number(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);
    char plaintext[MAX];

    printf("Plaintext: ");
    fgets(plaintext, MAX, stdin);

    int length = strlen(plaintext);
    char ciphertext[length + 1]; 

    for (int i = 0; i < length; i++)
    {
        if (isalpha(plaintext[i]))
        {
            ciphertext[i] = formula(plaintext[i], key);
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }
    ciphertext[length] = '\0'; 

    printf("Ciphertext: %s\n", ciphertext);

    return 0;
}

bool is_number(char *string)
{
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (!isdigit(string[i]))
            return false;
    }
    return true;
}

char formula(char character, int key)
{
    if (isupper(character))
    {
        return ((character - 'A' + key) % 26) + 'A';
    }
    else if (islower(character))
    {
        return ((character - 'a' + key) % 26) + 'a';
    }
    return 1;
}
