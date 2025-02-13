from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        while val in nums:
            nums.remove(val)
        return len(nums)
    

list = [3,2,2,3]
val = 3

print(Solution().removeElement(list , val))
print ("7beba kalt el baneeh dbta3y w mlk maytnha")