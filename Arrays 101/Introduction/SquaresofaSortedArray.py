class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        for i in range (0,len(A)):
            A[i]*=A[i]
        return sorted(A)
