#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int const MAX = 500;

int coleman_liau (int words, int letters, int sentences);

int main(void)
{
    int words = 1, letters = 0, setences = 0;
    char text[MAX];

    printf("text: ");
    fgets(text,MAX,stdin);

    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        if (text[i] == ' ')
        {
            words++;
        }
        if(text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            setences++;
        }
    }
    
    int index = coleman_liau(words,letters, setences);
   
    if(index <= 1)
    printf("\nBefore Grade 1");
    
    else if(index >= 16)
    printf("\nGrade 16+");
    
    else
    printf("\nGrade %i",index);
    

    return 0;
}

int coleman_liau (int words, int letters, int sentences)
{
    float l = (float) letters / words * 100;
    float s = (float) sentences / words * 100;

    float index = (0.0588 * l - 0.296 * s - 15.8);
    return round(index);
}