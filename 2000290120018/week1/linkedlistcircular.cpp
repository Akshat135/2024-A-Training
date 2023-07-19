class Solution {
public:
    
    
    int search(vector<int>& nums, int target) {
       int n=nums.size();
        int lo=0,hi=n-1;
        int mid;
        while(hi-lo>1){
            int mid=(hi+lo)/2;
            if(nums[mid]<target){
                lo=mid+1;
            }else{
                hi=mid;
            }
        }
        
        if(nums[lo]==target){
            return lo;
        }else if(nums[hi]==target){
            return hi;
        }
        return -1;
        
          
        
        
    }
};
