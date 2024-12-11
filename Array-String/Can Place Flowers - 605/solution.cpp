class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ans = 0;
        int m = flowerbed.size();
        vector <int> v(m+2,0);
        for(int i=1;i<m+1;i++) v[i] = flowerbed[i-1];
        for(int i=1;i<m+1;i++)
        {
            if(v[i]!=1 && v[i-1]!=1 && v[i+1]!=1) {v[i]=1; ans++;}
        }
        return ans>=n;
    }
};