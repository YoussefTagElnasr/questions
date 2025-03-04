from typing import List

class Solution:
       def majorityElement(self, nums: List[int]) -> int:
        ocurncess = {}  
        threshold = len(nums) // 2  

        for number in nums:
            ocurncess[number] = ocurncess.get(number, 0) + 1  

            if ocurncess[number] > threshold:  
                return number


nums = [3,2,3]     
print(Solution().majorityElement(nums))