class Solution:
    def reverse(self, x: int) -> int:
        isNegative=False
        r=0
        if(x<0):
            x=-x
            isNegative=True
        while x:
            r=r*10+x%10
            x//=10
        if(r>2**31-1):
            return 0
        return -r if isNegative else r