class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        leng = len(nums)
        i=1
        while(i<leng):
            if(nums[i-1]==nums[i]):
                nums.remove(nums[i])
                leng=leng-1
            else:
                i=i+1
