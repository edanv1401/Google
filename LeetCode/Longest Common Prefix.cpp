class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = (int) strs.size();
        int idx = 0;
        while(true){
            if(strs[0]=="")break;
            char comp = strs[0][idx];
            int temp = 0;
            for(int i=0;i<n;i++){
                if(idx>=strs[i].size()){
                    return ans;
                }
                if(strs[i][idx]==comp){
                    temp++;
                }
            }
            if(temp!=n)break;
            idx++;
            ans.push_back(comp);
        }
        return ans;
    }
};
