# https://leetcode.com/problems/container-with-most-water/
class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxArea = 0
        head = 0
        tail = len(height) - 1
        while(head < tail):
            breadth = tail - head
            maxArea = max(maxArea, breadth * min(height[tail], height[head]))
            if(height[head] > height[tail]):
                tail -= 1
            else:
                head += 1
        return maxArea
