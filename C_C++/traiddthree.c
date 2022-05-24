#include<stdio.h> // include stdio.h

int main() 
{

    int d1, d2, d3, tmp;

    // generate three digit numbers
    for (int num = 100; num <= 333; num++) 
    {
        // check for unique digits in the first number
        for (int i = num; i <= num * 3; i += num) 
        {
            tmp = i;
            d1 = tmp % 10;

            tmp = tmp / 10;
            d2 = tmp % 10;

            tmp = tmp / 10;
            d3 = tmp % 10;

            if (d1 == d2 || d2 == d3 || d3 == d1) {
                goto next;
            }
        }

        // check whether the given three numbers have unique digits or not
        for (int a = num; a > 0; a /= 10) 
        {
            d1 = a % 10;
            for (int b = num * 2; b > 0; b /= 10) 
            {
                d2 = b % 10;
                for (int c = num * 3; c > 0; c /= 10) 
                {
                    d3 = c % 10;

                    if (d1 == d2 || d2 == d3 || d3 == d1) 
                    {
                        goto next;
                    }
                }
            }
        }

        printf("%d %d %d\n", num, num * 2, num * 3);

        next:;
    }

    return 0;
}