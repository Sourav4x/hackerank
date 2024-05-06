class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int>s;
        vector<vector<int>>q;
        ssubsets(nums,0,s,q);
        return q;
    }
    private :
    void ssubsets(vector<int>& nums,int i,vector<int>& s,vector<vector<int>>& q)
    {
        if(nums.size()==i)
        {
           
            q.push_back(s);
            return ;

        }
        s.push_back(nums[i]);
        ssubsets(nums,i+1,s,q);
        s.pop_back();
        
        ssubsets(nums,i+1,s,q);
    
    }
};
