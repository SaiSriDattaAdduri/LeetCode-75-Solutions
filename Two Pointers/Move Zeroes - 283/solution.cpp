class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l=0,r=0;
        while(r<n)
        {
            if(l==r) r++;
            else if(nums[l]!=0) l++;
            else
            {
                if(nums[r]==0) r++;
                else
                {
                    swap(nums[l],nums[r]);
                    l++;
                    r++;
                }
            }
        }
    }
};