#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,n,find,temp,min;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
 
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    for(i=0;i<n-1;i++)
    {
        min=arr[i];
        find=i;
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                find=j;
            }
        }
 
        temp=arr[i];
        arr[i]=arr[find];
        arr[find]=temp;
    }
 
    cout<<"Sorted list is as follows"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}
