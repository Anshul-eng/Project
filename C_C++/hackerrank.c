#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    
    int *p,n,i;
    scanf("%d",&n);
    p= (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d ",&i);
    }
   int  sum=0;
   for(i=0;i<n;i++)
   {
        sum+=p[i];
   } 
    printf("\n%d",sum);
  
     free (p);
    return 0;
}
