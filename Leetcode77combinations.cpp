class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        set<vector<int>>v;
        vector<int>ar;
       
        sss(v,1,n,ar,k);
        vector<vector<int>>t(v.begin(),v.end());
        return t;
    }
    void sss(set<vector<int>>&v,int ind,int n,vector<int>&ar,int k){
        if(ar.size()==k){
            v.insert(ar);
            return ;
        
        }
          
           for(int i=ind;i<=n;++i)
           {
              ar.push_back(i);
              sss(v,i+1,n,ar,k);
              ar.pop_back();
              

          }
    }

        
    
};
