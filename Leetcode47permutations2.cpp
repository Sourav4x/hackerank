class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>s;
        p2(0,nums,s);
        vector<vector<int>>ret(s.begin(),s.end());
        return ret;
    }
    void p2(int i,vector<int>&nums,set<vector<int>> &s)
    {
        if(i==nums.size())
        {
            s.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
        
            swap(nums[i],nums[j]);
            p2(i+1,nums,s);
            swap(nums[i],nums[j]);
        }
    }
};
