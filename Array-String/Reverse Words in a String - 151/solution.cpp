class Solution {
public:
    string reverseWords(string s) {
        vector <string> v;
        int n = s.size();
        int l1=0,l2=n-1;
        while(s[l1]==' ') l1++;
        while(s[l2]==' ') l2--;
        string temp = "";
        for(int i=l1;i<=l2;i++)
        {
            if(s[i]==' ')
            {
                v.push_back(temp);
                temp = "";
            }
            else temp += s[i];
            if(i==l2) v.push_back(temp);
        }
        string ans = "";
        int m = v.size();
        for(int i=m-1;i>=0;i--)
        {
            ans += v[i];
            if(i!=0 && v[i]!="") ans += " ";
        }
        return ans;

    }
};