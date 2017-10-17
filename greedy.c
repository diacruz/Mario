#include <stdio.h>
#include <cs50.h>

int main(void)

{
    float change;
    // I am declaring my varible that I will use in my code

    // My do while loop will begin by checking if the condition is true
    do
    {
        // this statement will excute when the conditions is vertified to be true
        printf("O hai! How much change is owed?: ");
        change = get_float();
    }
    //If this condition is true it print out change
    while(change <= 0);

    // The greedy cashier will begin here
    change = (change * 100);

    //I am declaring another variable
    int cents = change;

    //declaring a variable
    int coins = 0;

    for (int i = 0; cents > 0; i++)

    {
        // if what the user put is true in regards to the expression
        if (cents >= 25)
        {
            //this will execute
            cents = cents - 25;
            coins++;
        }// if the other expression is not true,
        else if (cents <= 25 && cents >= 10)
        {
            cents = cents - 10;
            coins++;
        }
        else if (cents <= 10 && cents >= 5)
        {
            cents = cents - 5;
            coins++;
        }
        else
        {
            cents = cents - 1;
            coins++;
        }
    }


    printf("%i\n", coins);

    return 0;
}
