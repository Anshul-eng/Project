#include<stdio.h>
int main()
{
 int a=5, b=5, c=10;
 
 if(a==b&&c>b)
 printf("a and b are equal and c greater than b");
 else if(a==b&&c<b)
 printf("a equals to b and c is less than b");
 else if(a==b||c<b)
 printf("If a equals to b or c is less than b");
 else if(a!=b||c<b)
 printf("If a not equal to b or c is less than b");
 return 0;

}