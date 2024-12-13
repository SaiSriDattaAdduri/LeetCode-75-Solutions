class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int n = chars.size();
        string s = "";
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(s=="") {s+=chars[i];cnt++;}
            else if(chars[i]!=chars[i-1])
            {
                ans += s;
                if(cnt!=1)
                ans += to_string(cnt);
                s = "";
                cnt = 0;
                s+=chars[i];cnt++;
            }
            else cnt++;
        }
        ans += s;
        if(cnt!=1)
        ans += to_string(cnt);
        int k = ans.size();
        chars.resize(k);
        for(int i=0;i<k;i++) chars[i] = ans[i];
        return k;
    }
};