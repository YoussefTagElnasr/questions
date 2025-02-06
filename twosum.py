from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        twosum_dict = dict()
        for idx, value in enumerate(nums):
            try:
                return [twosum_dict[value], idx]
            except:
                twosum_dict[target - value] = idx

Solution().twoSum([2,7,11,4] , 15)
try:
    print('help')
except:
    print('aw man')
