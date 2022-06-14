class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        l=len(set(nums))
        m=sorted(set(nums))
        
        if(l==1):
            return m[0]
        elif(l==2):
            return m[1]
        else:
            return m[len(m)-3]