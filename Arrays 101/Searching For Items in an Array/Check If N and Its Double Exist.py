class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        # for i in range (0,len(arr)):
        #     for j in range (0,len(arr)):
        #         if(arr[i] == 2*arr[j] and i!=j):
        #             return True
        # return False
        s = collections.Counter(arr)
        if(s[0]>1):
            return True
        for num in arr:
            if s[2*num] and num!=0:
                return True
        return False
