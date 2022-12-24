class Solution {
public:
    void trans(string &c,int low,int high)
    {
         while(low<=high)
        {
            swap(c[low],c[high]);
            low++;
            high--;
        }
    }
    string reverseWords(string s) {
          int start=0;
         for(int i=0;i<s.length()-1;i++)
         {
             if(isspace(s[i]))
             {
                 trans(s,start,i-1);
                 start=i+1;
             }
         }
        trans(s,start,s.length()-1);
        return s;
        
    }
};