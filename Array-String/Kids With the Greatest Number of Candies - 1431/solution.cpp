class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = INT_MIN;
        for(auto i: candies) m = max(i,m);
        vector <bool> v;
        for(auto i:candies)
        {
            if( (i+extraCandies) >= m ) v.push_back(true);
            else v.push_back(false);  
        }
        return v;
    }
};