#include <stdio.h>

/* Function prototype */
int factorial(int n);

int main(void)
{
    int number;
    long result;

    printf("Enter a positive integer to calculate its factorial: ");
    scanf("%d", &number);

    result = factorial(number);

    printf("Factorial of %d is %d\n", number, result);

    return 0;
}

/* Recursive function to calculate factorial */
int factorial(int n)
{
    /* Base case: factorial of 0 or 1 is 1 */
    if (n == 0 || n == 1)
    {
        return 1;
    }
    /* Recursive case: n! = n * (n-1)! */
    else
    {
        return n * factorial(n - 1);
    }
}

