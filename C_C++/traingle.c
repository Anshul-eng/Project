#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);

    if((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("No Triangle");
        return 0;
    }
   if(a == b && b == c)
      printf("The Given Triangle is equilateral\n");
   else if(a == b || b == c || c == a)
      printf("The given Triangle is isosceles\n");
   else
      printf("The given Triangle is scalene\n");
   return 0;
}