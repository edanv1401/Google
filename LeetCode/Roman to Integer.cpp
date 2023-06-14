class Solution {
public:
    int romanToInt(string s) {
        int n = (int)s.size();
        unordered_map<char , int> romans;
        romans['I']= 1;
        romans['V']= 5;
        romans['X']= 10;
        romans['L']= 50;
        romans['C']= 100;
        romans['D']= 500;
        romans['M']= 1000;
        int total = 0;
        for(int i=0;i<n;i++){
            int x = romans[s[i]];
            if(i <  n-1){
                int y = romans[s[i+1]];
                if(x < y){
                    total+= (y-x);
                    i++;
                    continue;
                }
            }
            total += x;
        }
        return total;
    }
};
