#include <ctype.h>
#include <stdio.h>
#include <string.h>
int const MAX = 15;
// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char *word);

int main(void)
{
    // Get input words from both players
    char word1[MAX];
    printf("Player 1: ");
    fgets(word1,MAX,stdin);

    char word2[MAX];
    printf("Player 2: ");
    fgets(word2,MAX,stdin);
    
    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    printf("Player 1 scores: %i\n",score1);
    printf("Player 1 scores: %i\n",score2);
    if (score1 == score2)
        printf("TIE");
    else if( score1 > score2)
        printf("Player 1 is the winner.");
    else
        printf("Player 2 is the winner.");
    
}

int compute_score(char *word)
{
    int length = strlen(word);
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        if (isalpha(word[i])){
            char character = tolower(word[i]);
            sum += POINTS[character - 'a'];
        }
    }
    return sum;
}