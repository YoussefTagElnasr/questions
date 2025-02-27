class Solution:
    def kItemsWithMaximumSum(self, numOnes: int, numZeros: int, numNegOnes: int, k: int) -> int:
        if k <= numOnes:
            return k  # Take all k ones
        elif k <= numOnes + numZeros:
            return numOnes  # Take all ones, rest are zeros (no effect on sum)
        else:
            remaining_negatives = k - (numOnes + numZeros)
            return numOnes - remaining_negatives  # Subtract the negative ones
