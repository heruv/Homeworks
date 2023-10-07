#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // random genarator start
    srand(time(NULL));
    int res = rand()%2; //generate number from [0;1]

    unsigned int guess;

    //technikal output
    printf("res:%d\n", res);
    
    printf("guesing game\n");
    printf("\nguess the number beetwin 0 and 1\n");
    printf("\nyour guess is:");
    scanf("%u\n", &guess);

    if (res==guess && guess<=1)
    {
        printf("you win!\n");
        return 0;
    }
    else if (res!=guess && guess<=1)
    {
        printf("you lose, try again\n");
        return 0;
    }
    else
    {
        printf("incorect number, enter another number\n");
    }
    
    return 0;
}