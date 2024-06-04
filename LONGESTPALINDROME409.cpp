class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97)
            {
                lower[s[i]-97]++;
            }
            else{
                upper[s[i]-65]++;
            }
        }
        int res=0;
        int flag=0;
        for(int i=0;i<lower.size();i++)
        {
            if(lower[i]%2==0)
            {
               res+=lower[i];
            }
            else 
            {
               res+=lower[i]-1;
                flag=1;

            }
             if(upper[i]%2==0)
            {
                res+=upper[i];
            }
            else{
                res+=upper[i]-1;
                flag=1;
            }
    }
        
        if(flag==1)
        return res+flag;
        else
        return res;
        return 0;

        
    }
};
