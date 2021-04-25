#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
    int number, guess, n_guess=1;

    srand(time(0)); //to generate random number
    number=rand()%50; //%num will generate a no. between 1 to num
    printf("The number is %d",number);
    //Comment out the upper line, the player will not see the number


    while(guess!=number)
    {
        printf("\nGuess the number between 1 to 50: ");
        scanf("%d",&guess);
    if(number<guess)
            printf("\nSmall Number Please !!");

    else if(number>guess)
            printf("\nLarge Number Please !!");

    else
            printf("\nCongrats, You Guessed the number in %d try",n_guess);

     n_guess++;
    }
    return 0;
}
