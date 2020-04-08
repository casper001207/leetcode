class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for ( vector<int>::iterator it = nums.begin(); it != nums.end(); ++it ) {
            for ( vector<int>::iterator it2 = nums.begin() + distance(nums.begin(), it) + 1; it2 != nums.end(); ++it2 ) {
                    if (*it + *it2 == target) {
                        v.push_back(distance(nums.begin(), it));
                        v.push_back(distance(nums.begin(), it2));
                        return v;
                    }
                }
            }
        return v;
    }
};