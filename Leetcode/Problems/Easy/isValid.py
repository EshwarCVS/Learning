# https://leetcode.com/problems/valid-parentheses/
class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        d = {')':'(','}':'{',']':'['}
        for char in s:
            if char in d.values():
                stack.append(char)
            else:
                if len(stack):
                    if stack.pop()!= d[char]:
                        return False
                else:
                    return False
        if len(stack):
            return False
        return True
