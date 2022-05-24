#include<stdio.h>
#define MAX 50;
int BinarySearch(int arr[], int size, int item);
int main(void)
{
    int i, size , item, arr[];
    
    printf("Enter the number of element :");
    scanf("%d\n",&size);
    
    printf("Enter element of array :\n");
    for(i=0; i<size; i++)
    scanf("%d",%arr[i]);
    
    printf("enter the element to search :");
    scanf("%d",&item);

}

int BinarySearch(int arr[], int size, int item)
{
    int low =0, up=size-1,mid;
    while(low<=up)
    {
        mid=(low+up)/2;
        if(item>arr[mid])
        low=mid+1;
        else if(item<arr[mid])
        up=mid-1;
        else
        return mid;
    
    }
    return -1;
}