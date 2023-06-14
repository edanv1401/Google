class Solution {
public:
    bool isValid(string s) {
        int n = (int) s.size() / 2;
        string temp = s;
        for(int i=0;i<n;i++){
            temp = replaceAll(temp, " ", "");
            temp = replaceAll(temp, "{}", "");
            temp = replaceAll(temp, "()", "");
            temp = replaceAll(temp, "[]", "");
        }
        return (!(int) temp.size());
    }

    string replaceAll(string str, const string& from, const string& to) {
        size_t start_pos = 0;
        while((start_pos = str.find(from, start_pos)) != std::string::npos) {
            str.replace(start_pos, from.length(), to);
            start_pos += to.length();
        }
        return str;
    }
};
