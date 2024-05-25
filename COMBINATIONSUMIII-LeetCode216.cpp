class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        vector<vector<int>>s;
        subs(v,s,k,n,1);
       
        return s;
        
    }
    void subs(vector<int>&v,vector<vector<int>>&s,int k,int n,int start)
    {
        
        if(v.size()==k)
        {
            if(n==0)
            s.push_back(v);
            return;
        }
        
      
        for(int i=start;i<=9;++i)
        {
           if(i>n)
            {
                return;
            }
            v.push_back(i);
            subs(v,s,k,n-i,i+1);
            v.pop_back();
        
           
        }
    }
};
