#include <stdio.h>

int main (void)
{
    int height;
    do{
    printf("height: (1 - 8)");
    scanf("%d",&height);
     } while (height < 1 || height > 8);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - 1 - i; j++) {
            printf(" ");
        }
        for (int k = 0; k <=  i; k++) {
            printf("#");
        }
        for (int j = 0; j < 2; j++){
            printf(" ");
        }
        for (int k =0; k <= i; k++){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
