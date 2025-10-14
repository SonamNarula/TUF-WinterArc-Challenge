// Given an integer array nums, return the sum of the 1st and last element of the array
class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }

        int first = nums[0];
        int last = nums[nums.size() - 1];

        return first + last;
    }
};
