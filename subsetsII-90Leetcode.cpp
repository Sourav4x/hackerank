class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<int>a;
        subsets(nums,s,a,0);
        vector<vector<int>>v(s.begin(),s.end());
        
        return v;
    }

void subsets(vector<int>& nums,set<vector<int>>& s,vector<int>& a,int i)
{
    if(nums.size()==i)
    {
    s.insert(a);
    return ;
    }
    a.push_back(nums[i]);
    subsets(nums,s,a,i+1);
    a.pop_back();
    subsets(nums,s,a,i+1);
}};
