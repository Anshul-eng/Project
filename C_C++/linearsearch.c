#include<stdio.h>
int LinearSearch(int arr[], int n,int item);
int main()
{
    int i, n ,item,arr[22],index;
    printf("number of element :");
    scanf("%d",&n);
    printf("enter the element :\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the item to be searched : ");
    scanf("%d",&item);
    index=LinearSearch(arr,n,item);
    if( index==-1)
     printf("%d notfound in arrray\n", item);
     else
     printf("%d found in array\n",item);
     return 0;
}

    int LinearSearch(int arr[], int n, int item)
    {
        int i=0;
        while(i<n && item!=arr[i])
        i++;
        if(i<n)
        return i;
        else
        return -1;
        
    }

