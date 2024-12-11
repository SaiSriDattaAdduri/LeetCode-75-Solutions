class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        string ans = "";
        set <char> s1 = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        string s2 = "";
        for(int i=0;i<n;i++)
        {
            if(s1.find(s[i])!=s1.end()) s2 += s[i];
        }
        int m = s2.size() - 1;
        for(int i=0;i<n;i++)
        {
            if(s1.find(s[i])!=s1.end()) ans += s2[m--];
            else ans += s[i];
        } 
        return ans;
    }
};