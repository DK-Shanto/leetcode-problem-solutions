class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=nums.size();
        for(int i=0;i<k;i++)
        {
            if(nums[i]==val)
            {
                for(int j=i+1;j<k;j++)
                {
                    nums[j-1]=nums[j];
                }
                k--;
                i--;
            }
        }
        return k;
    }
};