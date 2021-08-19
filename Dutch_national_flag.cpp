/*dutch national flag algorithm.
/it is used when we have to sort to sort an array 
(just like dutch flag has there colours similarly in this algorthm we have 3 pointers which helps to make this task easier )*/
#include<bits/stdc++.h>
using namespace std;

void sortation(int arr[],int size)
{
    int low=0;

    int mid=0;

    int high=size-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
        low++;
        mid++;
        
        }
        
        else if(arr[mid]==1)
        {
                mid++;
        }
        
        else if(arr[mid]==2)
        {
            int temp=arr[high];
            arr[high]=arr[mid];
            arr[mid]=temp;
        high--;

        }
    }
}
    

int main()
{
    int size;

    cin>>size;

    int arr[100];

    for(int index=0 ; index<size ; index++)
    {
        cin>>arr[index];
    }

    sortation(arr,size);

    for(int index=0;index<size;index++)
    {
        cout<<arr[index]<<" ";
    }

    return 0;

}