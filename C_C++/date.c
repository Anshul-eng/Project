#include<stdio.h>
int main ()
{
    int x,y,a,b;
    printf("enter two number :");
    scanf("%d %d",&x,&y);
    a=x; b=y;
    while(a!=b)
    {
        if(a<b)
        a= a+x;
        else
        b=b+y;
    }
    printf("lcm of two number %d\n",a);
    a=x; b=y;
    while(a!=b)
    {
        if (a>b)
        a=a-b;
        else
        b=b-a;
    }
    printf(" HCF of two number is %d\n",a);
    return 0;
}