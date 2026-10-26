#include <stdio.h>

int main()
{
    int number, digit;
    int even = 0, odd = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number == 0)
    {
        even = 1;
    }

    while (number > 0)
    {
        digit = number % 10;

        if (digit % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        number = number / 10;
    }

    printf("Even digits: %d\n", even);
    printf("Odd digits: %d\n", odd);

    return 0;
}
