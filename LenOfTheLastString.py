class Solution(object):
    def lengthOfLastWord(self, s):
        counter = 0
        for i in range(len(s) - 1 , -1 , -1):
            if(s[i].isalpha()):
                counter += 1
            elif(s[i] == " " and (counter != 0)):
                break
        return counter

 

