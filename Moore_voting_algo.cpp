//IT IS USED WHENEVER WE NEED TO FIND THE OCCURENCE OF ELEMENT GREATER THAN N/K
//to find majority element in an array
//it solves question in O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        
        int size=nums.size();
        
        int count = 1 ; 
        
        int element=nums[0];         //storing first element of array
        
        for(int loop=1 ; loop<size ; loop++)
        {
            if(nums[loop]==element)         //starting from 1 we will match every element if it is equal we will increase count
            {
                count=count+1;
            }
            else{
                count=count-1;             // if next element is not equal 
                if(count==0)
                {
                    element=nums[loop];
                    count=1;
                }
            }
        }
        
        return element;
        
        
        
    }
};