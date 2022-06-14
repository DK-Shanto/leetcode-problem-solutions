class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        l=len(nums)
        s=set(range(1,l+1))
        
        for num in nums:
            if num in s:
                s.remove(num)
        
        return list(s)
        