class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int l1=0, l2=0;
        while(l2<m)
        {
            if(l1==n) return true;
            else
            {
                if(s[l1]==t[l2]) {l1++;l2++;}
                else l2++;
            }
        }
        return l1==n;
    }
};