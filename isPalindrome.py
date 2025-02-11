class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        reminder = x
        x = str(x)
        x = x[::-1]
        x = int(x)
        if reminder == x:
            return True
        else:
            return False         

x = 122
print(Solution().isPalindrome(x))