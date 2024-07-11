#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coins = 0;
    float change_owed;
    do
    {
        printf("change owed: ");
        scanf("%f",&change_owed);
    }
    while(change_owed < 0);


    while(change_owed >= 0.25)
    {
        change_owed = change_owed - 0.25;
        coins++;
        printf("Change owed: %.2f\n",change_owed);
    }
    while(change_owed >= 0.10)
    {
        change_owed = change_owed - 0.10;
        coins++;
        printf("Change owed: %.2f\n",change_owed);
    }
    while(change_owed >= 0.05)
    {
        change_owed = change_owed - 0.05;
        coins++;
        printf("Change owed: %.2f\n",change_owed);
    }
    while(change_owed >= 0.01)
    {
        change_owed = change_owed - 0.01;
        coins++;
        printf("Change owed: %.2f\n",change_owed);
    }

    printf("Coins used: %d\n",coins);

return 0;
}
