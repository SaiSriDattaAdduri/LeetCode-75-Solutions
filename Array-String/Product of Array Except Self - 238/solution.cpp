class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> v1(n,1), v2(n,1), ans(n,1);
        for(int i=1;i<n;i++)
        {
            v1[i] = v1[i-1]*nums[i-1];
            v2[n-1-i] = v2[n-i]*nums[n-i];
        }
        for(int i=0;i<n;i++) ans[i] = v1[i]*v2[i];
        return ans;
    }
};