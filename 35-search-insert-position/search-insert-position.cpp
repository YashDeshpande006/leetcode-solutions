class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=(start+end)/2;
        bool isfound=false;
        while(end>=start){
            if(nums[mid]==target){
                isfound=true;
                break;
            }
            else if(nums[mid]<target){
                start=mid+1;
                mid=(start+end)/2;
            }
            else{
                end=mid-1;
                mid=(start+end)/2;
            }
        }
        if(isfound){
            return mid;
        }
        else{
            return start;
        }
    }
};