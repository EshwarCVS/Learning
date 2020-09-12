class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max=-1
        temp=0
        for i in nums:
            if i == 0:
                if(max<temp):
                    max=temp
                temp=0
            else:
                temp+=1
        if(max<temp):
            max=temp
        return max
