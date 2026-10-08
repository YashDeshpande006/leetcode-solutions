class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> freq(nums.size()+1,0);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int j=1;j<freq.size();j++){
            if(freq[j]==0){
                ans.push_back(j);
            }
        }
        return ans;
    }
};