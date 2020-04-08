class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int prev = nums[0];
        for (auto it = nums.begin()+1; it != nums.end(); ++it) {
            if (prev == *it) {
                nums.erase(it);
                --it;
            }
            else
                prev = *it;
        }
        return nums.size();
    }
};