#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int start, end, count = 0, llamas;
    do{
        printf("Start population: ");
        scanf("%d",&start);
    }
        while(start<9);

    do{
        printf("\nEnd population: ");
        scanf("%d",&end);
    }
        while(end <= start);

    llamas = start;
    while(llamas < end){
        llamas = llamas + (llamas / 3) - (llamas / 4);
        count++;
        printf("\nLlamas: %d\n", llamas);
    }
    printf("\nYears: %d\n", count);
    return 0;
}
