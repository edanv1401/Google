class Solution {
public:
    int strStr(string haystack, string needle) {
        string s = needle+"$"+haystack;
        int n = s.size();
        vector<int> z(n);
        int x = 0, y = 0;
        for(int i = 1; i < n; ++i) {
            z[i] = max(0, min(z[i-x], y-i+1));
            while (i+z[i] < n && s[z[i]] == s[i+z[i]])
            x = i, y = i+z[i], z[i]++;
        }
        for(int i=0;i<s.size();i++){
            if(z[i]==needle.size()){
                return i-needle.size()-1;
            }
        }
        return -1;
    }
};
