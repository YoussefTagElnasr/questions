class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        badPairs = 0
        store= {}

        for i in range(len(nums)):
            if store.get(nums[i] - i):
                badPairs +=  i - store[nums[i] - i] 
                store[nums[i] - i] += 1
            else:
                store[nums[i] - i] = 1
                badPairs += i

        return badPairs