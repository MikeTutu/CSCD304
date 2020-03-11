#include<iostream>
using namespace std;
int main()
{
    int k,x,j,temp;
    cout<<"Input number of elements: ";
    cin>>k;
    int arr[k];
    cout<<"input array values:"<<endl;
  
    for(x=0;x<k;x++)
    {
        cin>>arr[x];
    }
    
    for(x=0;x<k-1;x++)
    {
        for(j=0;j<k-x-1;j++)
        {
           
            if(arr[j]>arr[j+1])
            {
               
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Bubble sort after array is:"<<endl;
    for(x=0;x<k;x++)
    cout<<arr[x]<<" ";
    return 0;
}
