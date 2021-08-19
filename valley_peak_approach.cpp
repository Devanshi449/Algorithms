class Solution {
public:
    int longestMountain(vector<int>& arr) 
    {
        if(arr.size()<3)
        {
            return 0;
        }
        
        int count=0;
        
        int i=0;
        
        bool peak=false;          //called peak and valley method
        bool valley=false;
        
        while(i<(arr.size()-1))
        {
            
            if(arr[i]<arr[i+1])
            {
                int start=i;
                
                while(i<(arr.size()-1) && arr[i]<arr[i+1])
                {
                    peak=true;
                    i++;
                
                }
                
                while(i<(arr.size()-1) && arr[i]>arr[i+1])
                {
                    valley=true;
                    i++;
                }
                
                if(peak==true && valley==true)
                {
                    count=max(count,i-start+1);
                }
                peak = false;
                valley=false;
            }
            else
            {
                i++;
            }
        }
        
        return count;
        
    }
};