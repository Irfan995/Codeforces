#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    int length;
    cin>>length;
    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
     for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }


}
