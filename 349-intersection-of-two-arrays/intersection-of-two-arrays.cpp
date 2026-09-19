class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final;
        set<int> mid;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    mid.insert(nums1[i]);
                    break;
                }
            }
        }
        final.assign(mid.begin(),mid.end());
        return final;
    }
};