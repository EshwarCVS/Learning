# https://leetcode.com/problems/3sum/
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        result = []
        for start in range(0, len(nums) - 2):
            head = start + 1
            tail = len(nums) - 1
            diff = 0 - nums[start]
            while(head < tail):
                total = nums[head] + nums[tail]
                if(total > diff):
                    tail -= 1
                elif(total < diff):
                    head += 1
                else:
                    result.append((nums[start], nums[head], nums[tail]))
                    head += 1
                    tail -= 1
        return list( set(result))
