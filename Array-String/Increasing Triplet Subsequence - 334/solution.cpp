class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int p1 = INT_MAX, p2 = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=p1) p1 = nums[i];
            else if(nums[i]<=p2) p2 = nums[i];
            else return true;
        }
        return false;
    }
};