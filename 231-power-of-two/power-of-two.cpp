class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool ispower = false;
        for (int i = 0; i < 31; i++) {
            if (n == pow(2, i)) {
                ispower = true;
            }
        }
        return ispower;
    }
};