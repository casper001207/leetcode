class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if (strs.size() == 0){
            return result;
        }
        if (strs.size() == 1) {
            return strs[0];
        }
        for (int i = 0; ;++i) {
            for (int j = 0; j < strs.size(); ++j) {
                if (strs[j].size() == i || strs[j][i] != strs[0][i])
                    return result;
            }
            result.push_back(strs[0][i]);
        }
    }
};