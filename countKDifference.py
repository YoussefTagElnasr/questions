class Solution:
    def countKDifference(self, nums: List[int], k: int) -> int:
        store = {}
        ret = 0
        
        for i in range(len(nums)):
            # Store the count of nums[i] before checking for pairs
            store[nums[i]] = store.get(nums[i], 0) + 1  

            if store.get(nums[i] - k):  
                ret += store[nums[i] - k]  

            if store.get(nums[i] + k):  
                ret += store[nums[i] + k]  

        return ret
