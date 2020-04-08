class Solution {
public:
    int reverse(int x) {
        int result = 0;
        vector<int> nums;
        int temp;
        int negative = 0;
        
        if (x < 0) {
            if ( x < INT_MAX*(-1)) {
                return 0;
            }
            x *= -1;
            negative = 1;
        }
        
        while (x > 0) {
            temp = x % 10;
            nums.push_back(temp);
            x = x/10;
        }
        
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            result = result + nums[i]*pow(10, size-1-i);
            if (result < 0) { //overflow
                return 0;
            }
        }
        
        if (negative == 1) {
            result *= -1;
        }
        
        return result;
    }
};