class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=i+1;
        int l=nums.size();
        while(j<l)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else
            {
                i++;
                nums[i]=nums[j];
            }
        }
        int k=i+1;
        return k;
    }
};