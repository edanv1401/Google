class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = (int)nums.size();
        vector<int>temporal (n, target);
        for(int i=0;i<n;i++){
            temporal[i]-=nums[i];
        }
        vector< vector<int> >ans (n, vector<int> (n, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(nums[i]== temporal[j]) return vector<int>{i, j};
            }
        }
        return vector<int>{};
    }
};
