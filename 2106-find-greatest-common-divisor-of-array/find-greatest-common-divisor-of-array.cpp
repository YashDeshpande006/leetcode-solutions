class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = nums[0];
        int largest = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < smallest) {
                smallest = nums[i];
            }

            if (nums[i] > largest) {
                largest = nums[i];
            }
        }

        while (largest % smallest != 0) {
            int rem = largest % smallest;
            largest = smallest;
            smallest = rem;
        }

        return smallest;
    }
};