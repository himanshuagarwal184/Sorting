#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,9,3,7,8,6,10},t;
    int m=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element to search "<<endl;
    cin>>t;
    for(int i=0;i<m;i++)
    {
        if(arr[i]==t)
        {
            cout<<"element exists at "<<i<<" index";
            return 0;
        }
    }
    cout<<"element does not exists "<<endl;
    return 0;
}