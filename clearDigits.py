from typing import List

class Solution:
    def clearDigits(self , s: str) -> str:
        list = []
        lastIndex = -1
        i = 0

        while i < len(s):
            if s[i].isalpha():
                list.append(i)
                lastIndex += 1
            elif s[i].isdigit() and lastIndex != -1:
                s = s[:i] + s[i+1:]
                s = s[:list[lastIndex]] + s[list[lastIndex]+1:]
                i -= 2
                list.pop(lastIndex)
                lastIndex -= 1
                
            i += 1
        return s

s = "gbysb5"
print(Solution().clearDigits(s))

