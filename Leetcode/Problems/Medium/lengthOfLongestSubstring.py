# https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if(len(s) <= 1):
            return len(s)
        
        visit = {}
        max_length = 0
        head = 0
        for i in range(0,len(s)):
            if s[i] in visit:
                head = max(head, visit[s[i]]+1)
            max_length = max(max_length, i-head+1)
            visit[s[i]] = i
        return max_length        
                
                
