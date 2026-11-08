class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        for(int i=0;i<n;i++){
            int value=start+2*i;
            nums.push_back(value);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans^=nums[i];
        }
        return ans;
    }
};