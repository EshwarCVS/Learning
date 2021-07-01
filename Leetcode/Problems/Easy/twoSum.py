# https://leetcode.com/problems/two-sum/
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        lookup = {}
        for indices, value in enumerate(nums):
            diff = target - value
            if diff in lookup:
                return [lookup[diff], indices]
            lookup[value] = indices
        return
