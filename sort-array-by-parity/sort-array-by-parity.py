class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        num2=[]
        num3=[]
        for i in range(len(nums)):
            if(nums[i]%2==0):
                num2.append(nums[i])
            else:
                num3.append(nums[i])
        
        num2.extend(num3)
        
        return num2