class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        vector<int>arr(nums.size()+1,0);
        for (int num : nums) {
            arr[num] = 1;
        }

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                return i;
            }
        }
        return -1;
        
    }
};
