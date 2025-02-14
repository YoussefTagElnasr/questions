from typing import List

class Solution:
    def clearDigits(self , s: str) -> str:
        i = 0

        while i < len(s):
            if s[i].isdigit():
               s = s[:i - 1] + s[i + 1:]
               i -= 2
            i += 1
        return s

s = "gbysb5"
print(Solution().clearDigits(s))

