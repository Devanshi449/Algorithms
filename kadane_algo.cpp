// kadanes's algoritm
//best method to find maximum sum of subarray with min complexity ---> O(n)------
//we carry a subarray sum as long as it is positive.
#include<bits/stdc++.h>
using namespace std;

int kadanearr(int arr[],int size)
{
    int sum=0;

    int maximum=INT_MIN;
    
    for(int index=0 ; index<size ; index++)
    {
        sum=sum+arr[index];
        if(sum<0)
        {
            sum=0;
        }
        maximum=max(maximum,sum);
    }

    return maximum;

}

int main()
{
    int size;
    
    cin>>size;

    int arr[size];
    
    for(int index=0;index<size;index++)
    {
        cin>>arr[index];
    }

    int maxsum = kadanearr(arr,size);

    cout<<maxsum<<endl;

    return 0;

}