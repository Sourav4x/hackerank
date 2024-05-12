class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>s;
        p2(0,nums,s);
        //vector<vector<int>>ret(s.begin(),s.end());
        return s;
    }
    void p2(int i,vector<int>&nums,vector<vector<int>> &s)
    {
        if(i==nums.size())
        {
            s.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
        if(nums[j]!=nums[j+1])
         { swap(nums[i],nums[j]);
         }
            p2(i+1,nums,s);
            swap(nums[i],nums[j]);
        }
    }
};
