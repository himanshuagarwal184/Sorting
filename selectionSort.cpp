#include<iostream>
using namespace std;

int minimum(int arr[],int a,int b)
{
    int i,min=a;
    for(i=a;i<b;i++)
    {
        if(arr[i]<arr[min])
        {
            min=i;
        }
    }
    return min;
}

void selectionSort(int arr[],int n)
{
    int j;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

int main()
{
    int arr[50],n;
    cout<<"Enter the range of array : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(auto i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    selectionSort(arr,n);
    cout<<endl;
    for(auto i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
