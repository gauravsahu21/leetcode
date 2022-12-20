class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int>ans;
        unordered_set<int>s;
        s.insert(nums[0]);
        int pos2=0,pos1=0;
        for(int i=1;i<nums.size();i++)
        {
            if(s.find(target-nums[i])!=s.end())
            {   pos1=*s.find(target-nums[i]);
               pos2=i;
                  break;
            }
            s.insert(nums[i]);
                
        }
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==pos1)
            { ans.push_back(j);
            break;
            }
            
        }
        ans.push_back(pos2);
        return ans;
        
    }
};