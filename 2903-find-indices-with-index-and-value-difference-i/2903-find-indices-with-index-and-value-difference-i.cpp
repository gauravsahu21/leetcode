class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int d, int v) {
       int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(abs(i-j) >= d && abs(nums[i] - nums[j]) >= v) return {i,j};
            }
        }
        return {-1,-1};
    }
};