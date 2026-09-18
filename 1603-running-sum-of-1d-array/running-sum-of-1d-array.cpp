class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int runningsum=0;
        for(int i=0;i<nums.size();i++){
            runningsum+=nums[i];
            sum.push_back(runningsum);
        }
        return sum;
    }
};