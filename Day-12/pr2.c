#include <stdio.h>
#include <math.h>

int armstrong(int a)
{
    int original, remainder;
    int count = 0;
    int result = 0;

    original = a;

    // Count digits
    while (original != 0)
    {
        count++;
        original /= 10;
    }

    // Calculate sum of powers
    while (a > 0)
    {
        remainder = a % 10;
        result += pow(remainder, count);
        a /= 10;
    }

    return result;
}

int main()
{
    int c;

    printf("Enter a number: ");
    scanf("%d", &c);

    int result = armstrong(c);

    if (result == c)
        printf("%d is an Armstrong number.\n", c);
    else
        printf("%d is not an Armstrong number.\n", c);

    return 0;
}
       