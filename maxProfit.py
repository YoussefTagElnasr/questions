from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxprofit = 0
        maxi = 99999
        for i in range (len(prices) - 1):
            if prices[i] >= maxi:
                continue
            maxi= prices[i] 
            maxprofit = max(max(prices[i+1:]) - prices[i] , maxprofit)
        return maxprofit
        
list = [7,1,5,3,6,4]
print(Solution().maxProfit(list))