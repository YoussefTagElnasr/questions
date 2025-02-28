from typing import List

class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        ocurrences = {}
        if suits[1:] == suits[:-1]:
            return "Flush"
        
        for number in ranks:
            if ocurrences.get(number):
                ocurrences[number] += 1
                if ocurrences[number] >= 3:
                    return "Three of a Kind"
            else:
                ocurrences[number] = 1

        ocurrences = {}

        for number in ranks:
            if ocurrences.get(number):
                ocurrences[number] += 1
                if ocurrences[number] >= 2:
                    return "Pair"
            else:
                ocurrences[number] = 1

        return "High Card"
    
ranks = [4,4,2,4,4]
suits = ["d","a","a","b","c"]

print(Solution().bestHand(ranks , suits))