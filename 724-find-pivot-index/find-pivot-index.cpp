class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int leftsum=0;
        int rightsum=0;
        for(int j=0;j<nums.size();j++){
            rightsum=sum-leftsum-nums[j];
            if(leftsum==rightsum){
                return j;
            }
            leftsum+=nums[j];
        }
        return -1;
    }
};