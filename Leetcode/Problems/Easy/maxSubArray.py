class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        # Kadane's algorithm
        if(len(nums) <= 1):
            return nums[0]
        max_so_far = 0
        max_ending = 0
        for i in nums:
            max_ending = max_ending + i
            if(max_so_far < max_ending):
                max_so_far = max_ending
            if(max_ending < 0):
                max_ending = 0
        return max_so_far
