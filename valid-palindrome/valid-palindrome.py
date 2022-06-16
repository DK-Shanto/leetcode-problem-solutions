class Solution:
    def isPalindrome(self, s: str) -> bool:
        s2=""
        for i in s:
            if(i.isalpha()):
                s2+=i
            elif(i.isdigit()):
                s2+=i
        s2=s2.lower() 
        for i in range(0,len(s2)//2):
            if s2[i]!=s2[len(s2)-1-i]:
                return False
                
        return True
        