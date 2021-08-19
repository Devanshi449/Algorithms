//used to find prime_no in a range
//time complexity - O(nloglogn)
//sieve is an algorithm which is used to find prime numbers in a range
//will start from 2 and cut all the multiples of 2 till num(like 2)<=n ;

#include<bits/stdc++.h>
using namespace std;

void sieve_of_enthrothenes(int num)
{
    bool prime[num+1];    //bool array stores only 2 keywords false or true
    memset(prime , true , sizeof(prime));         //will convert every index value of array prime to true

    for(int index=2 ; index*index<=num ; index++ )        //start from 2 till sqrt(num)
    {
        if(prime[index]==true)
        {
            for(int ans=index*index ; ans<=num ; ans=ans+index)  
            {
                prime[ans]=false;
            }
        }
    }

    for(int index = 2 ; index<=num ; index++)
    {
        if(prime[index])
        {
            cout<<index<<" ";
        }
    }

}



int main()
{
    int num ; 

    cin>>num ; 

    sieve_of_enthrothenes(num);

    return 0;
    
}