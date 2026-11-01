class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101]={0};
        int count=0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==1){
                count+=nums[i];
            }
        }
        return count;
    }
};