// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans;
        for(int i=1;i<=n;i++)
        {
            bool isbad=isBadVersion(i);
            if(isbad==true)
              {ans=i;
               break;}
        }
        return ans;
        
    }
};