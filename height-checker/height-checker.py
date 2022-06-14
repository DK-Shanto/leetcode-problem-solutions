class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        height2=[]
        height2.extend(heights)
        height2.sort()
        k=0
        for i in range(len(heights)):
            if(heights[i]!=height2[i]):
                k+=1
        
        return k