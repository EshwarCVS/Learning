class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        temp=0
        for i in nums:
            i=len(str(i))
            i=i%2
            if(i==0):
                temp+=1
        return temp
