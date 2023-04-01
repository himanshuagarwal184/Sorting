#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1,n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[i+low];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
    while(j<n2)
    {
        arr[k++]=right[j++];
    }
}

void mergeSort(int arr[],int low,int high)
{
    if(high>low)
    {
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}


int main()
{
    int arr[50]={5,3,8,2,1};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }    
    cout<<endl;
    int l=0,h=4;
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }    
    return 0;
}