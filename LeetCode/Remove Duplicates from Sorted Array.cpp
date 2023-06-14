class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> e;
        for(int i: nums){
            e.insert(i);
        }
        nums = {};
        for(int i: e){
            nums.push_back(i);
        }
        return nums.size();
    }
};
