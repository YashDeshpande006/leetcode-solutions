class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int check=nums.size()/2;
        sort(nums.begin(),nums.end());
        return nums[check];
        
        
    }
};