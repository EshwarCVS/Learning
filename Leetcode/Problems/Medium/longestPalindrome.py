# https://leetcode.com/problems/longest-palindromic-substring/
class Solution:
    def longestPalindrome(self, s: str) -> str:
        # Start from the middle
        def helping(left, right):
            while(left >= 0 and right < len(s) and s[left]==s[right]):
                left -= 1
                right += 1
            return s[left+1:right]
        result = ""
        for loop in range(len(s)):
            res = helping(loop, loop)
            if(len(res) >= len(result)): result = res
            res = helping(loop, loop+1)
            if(len(res) >= len(result)): result = res
        return result
