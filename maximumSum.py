from typing import List

class Solution:
    def getSum(self , n: int): 
        sum = 0 
        while n != 0:
            sum += n % 10
            n = n // 10
        return sum
    
    def maximumSum(self, nums: List[int]) -> int:
        maximum = -1
        occurencess = {}
        
        for i in range(len(nums)):
            sumOfDigits = self.getSum(nums[i])

            if sumOfDigits in occurencess:
                maximum = max(maximum , (nums[i] + occurencess[sumOfDigits]))
                occurencess[sumOfDigits] = max(occurencess[sumOfDigits] , nums[i])
            else:
                occurencess[sumOfDigits] = nums[i]

        return maximum

nums = [123,132,321]
print(Solution().maximumSum(nums))