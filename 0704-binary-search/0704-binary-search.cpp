class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high=nums.size()-1;
        //cout<<high;
        int low=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            //cout<<nums[mid]<<endl;
            if(nums[mid]==target)
              return mid;
            else if(nums[mid]<target)
                low=mid+1;
            else
            high=mid-1;    
        }
        return -1;
    }
};