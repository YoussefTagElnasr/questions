from typing import List

class Solution:
    def triangleNumber(self, nums: List[int]) -> int:
        nums.sort()
        count = 0

        for i in range(len(nums) - 2):
            k = i + 2
            for j in range(i + 1, len(nums) - 1):
                while k < len(nums) and nums[i] + nums[j] > nums[k]:
                    k += 1
                if k > j + 1:
                    count += (k - j - 1)
        return count
    

nums =[0,1,1,1]
print(Solution().triangleNumber(nums))