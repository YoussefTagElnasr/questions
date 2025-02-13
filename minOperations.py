#Add min(x, y) * 2 + max(x, y) anywhere in the array.

from typing import List
import bisect

class Solution:
    def sortedInsert(self, nums: List[int], k: int): 
        bisect.insort(nums, k) 
        return nums   
    
    def minOperations(self, nums: List[int], k: int) -> int:
        nums = sorted(nums)
        operations = 0

        while len(nums) > 1 and nums[0] < k:
            added = min(nums[0] , nums[1]) * 2 + max(nums[0] , nums[1])
            nums.pop(0)
            nums.pop(0)
            nums = self.sortedInsert(nums , added)
            operations += 1
        return operations 


list = [61,8,39,89,97,79,64,6]
k = 98
print(Solution().minOperations(list , k))
