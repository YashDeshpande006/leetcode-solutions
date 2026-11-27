class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
            }
            else if (nums[i] > secondLargest) {
                secondLargest = nums[i];
            }

            if (nums[i] < smallest) {
                secondSmallest = smallest;
                smallest = nums[i];
            }
            else if (nums[i] < secondSmallest) {
                secondSmallest = nums[i];
            }
        }

        return (largest * secondLargest) - (smallest * secondSmallest);
    }
};