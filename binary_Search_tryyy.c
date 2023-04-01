#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[],int n)
{
    int k,ub,lb,mid,in;
    ub=n-1;
    lb=0;
    mid=abs(ub+lb)/2;
    printf("Enter the number to be searched : ");
    scanf("%d",&k);
    while(arr[mid]!=k && ub>lb)
    {
        if(k>arr[mid])
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
        mid=(ub+lb)/2;
    }
    if(arr[mid]==k)
    {
        return mid;
    }
    else
    {
        return -1;
    }
    
}


int main()
{
    int arr[50],i,j,n;
    printf("Enter the range of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=binarySearch(arr,n);
    if(j==-1)
    {
        printf("Element not found \n");
    }
    else
    {
        printf("The searched element %d is at %d index",arr[j],j);
    }

    return 0;
}