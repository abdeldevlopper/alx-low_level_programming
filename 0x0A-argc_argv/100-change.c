#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints the minimum number of coins to make change for an amount of money.
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the arguments passed to the program
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
    int cents, coins = 0;

    /* Check the number of arguments */
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    /* Convert the argument to an integer */
    cents = atoi(argv[1]);

    /* Check if the input is negative */
    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    /* Calculate the number of coins */
    while (cents > 0)
    {
        if (cents >= 25)
        {
            coins++;
            cents -= 25;
        }
        else if (cents >= 10)
        {
            coins++;
            cents -= 10;
        }
        else if (cents >= 5)
        {
            coins++;
            cents -= 5;
        }
        else if (cents >= 2)
        {
            coins++;
            cents -= 2;
        }
        else
        {
            coins++;
            cents -= 1;
        }
    }

    /* Print the result */
    printf("%d\n", coins);

    return 0;
}
