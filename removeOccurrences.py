class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        while True:
            if part in s:
                s = s.replace(part , "" , 1)
            elif part not in s:
                break
        return s
    
s = "ababc"
target = "abc"

print(Solution().removeOccurrences(s , target))