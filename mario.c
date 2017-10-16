#include <cs50.h>
#include <stdio.h>


int main(void)
{

    // I am declaring my variable that i will use within my code
    int row;
    int height;
    int hash;
    int space;

    // wait for user to input to input a number between 0 and 23 if neither or negative
    // I will prompt the question of height again
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while ((height < 0) || (height > 23));

    // Here begins the loop which will create the pyramind of hashes
    //depending on what the user inputs
    for (row = 1; row <= height; row++)
    {
        //in order to get spaces, height must be subtracted from the row
        for (space = (height - row); space > 0; space--)
        {
            printf(" ");
        }

        for (hash = 1; hash <= (row + 1); hash++)
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}
