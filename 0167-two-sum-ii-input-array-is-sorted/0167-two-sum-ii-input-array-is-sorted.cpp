class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        unordered_set<int>s;
        s.insert(numbers[0]);
        int pos2=0,pos1=0;
        for(int i=1;i<numbers.size();i++)
        {
            if(s.find(target-numbers[i])!=s.end())
            {   pos1=*s.find(target-numbers[i]);
               pos2=i+1;
                  break;
            }
            s.insert(numbers[i]);
                
        }
        for(int j=0;j<numbers.size();j++)
        {
            if(numbers[j]==pos1)
            { ans.push_back(j+1);
            break;
            }
            
        }
        ans.push_back(pos2);
        return ans;
        
    }
};