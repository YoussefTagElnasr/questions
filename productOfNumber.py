from typing import List
import math

class ProductOfNumbers:
   
    def __init__(self):
        self.data = []
        

    def add(self, num: int) -> None:
            self.data.append(num)
        

    def getProduct(self, k: int) -> int:
        n = len(self.data)
        if k > n:
            return math.prod(self.data)  
        
        prefixMulti = [1] * n
        prefixMulti[0] = self.data[0]
        for i in range(1, n):
            prefixMulti[i] = prefixMulti[i - 1] * self.data[i] 

        if prefixMulti[n - k - 1] == 0:
            return math.prod(self.data[-k:])
        
        if self.data[n - k] == 0:
            return math.prod(self.data[-k:])  
        
        if k == n:
            return prefixMulti[-1]
        
        return prefixMulti[-1] // prefixMulti[n - k - 1]




def parse(input1, input2):
    obj = ProductOfNumbers()
    ret = []
    for i in range(1,  len(input1)):
        if input1[i] == 'add':
            ret.append(obj.add(input2[i][0]))
        else:
            ret.append(obj.getProduct(input2[i][0]))
    return ret           
            


        

test = parse(["ProductOfNumbers","add","add","add","add" , "getProduct"] , [[],[1],[2],[0],[4],[1]])
print(test)
# obj = ProductOfNumbers()
# obj.getProduct(3)
# obj.add(3)
# obj.add(3)
# obj.add(3)
# obj.add(4)

# print(obj.data)
# print(obj.getProduct(3))