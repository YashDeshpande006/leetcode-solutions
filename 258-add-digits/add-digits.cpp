class Solution {
public:
    int addDigits(int num) {
        int copy_num = num;
        int digit = 0;
        int sum = 0;
        while (copy_num > 9) {
            sum = 0;
            while (copy_num > 0) {
                digit = copy_num % 10;
                sum = sum + digit;
                copy_num = copy_num / 10;
            }
            copy_num = sum;
        }
        return copy_num;
    }
};