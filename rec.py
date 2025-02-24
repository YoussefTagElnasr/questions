from typing import List
        
class Solution:
    def helper (self, target: int , path:str , ret:list[str] , nums: list[str]):
     if len(path) > target:
         return

     for char in ["0" , "1"]:
        path = path + char
        if len(path) == target:
            if path not in nums:
                ret.append(path[:])
                return True
        check = self.helper(target , path , ret , nums)
        if check:
           return True
        path = path[:-1]

    def findDifferentBinaryString(self, nums: List[str]) -> str:
        arr = []
        self.helper(len(nums[0]) , "" , arr , nums)
        return str(arr[0])


arr = ["00","01"]
print(Solution().findDifferentBinaryString(arr))


