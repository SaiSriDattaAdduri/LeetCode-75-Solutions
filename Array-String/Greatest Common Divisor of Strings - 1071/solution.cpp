class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1)
        return "";
        int n = str1.size();
        int m = str2.size();
        int r = __gcd(m,n);
        return str1.substr(0,r);
    }
};