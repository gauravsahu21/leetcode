class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int>s;
        int second;
        vector<int>k;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(target-nums[i])!=s.end())
            {   k.push_back(i);
                second=*s.find(target-nums[i]);
                 break;
            }
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==second)
            {    k.push_back(i);
            break;
            }
            
        }
        
        return k;
        
    }
};