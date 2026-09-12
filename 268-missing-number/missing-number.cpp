class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int exp_sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<=nums.size();i++){
            exp_sum+=i;
        }
        int num=exp_sum-sum;
        return num;
    }
};