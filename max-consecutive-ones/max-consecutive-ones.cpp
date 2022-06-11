class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int x=0,c=0,d=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1 && x==0)
            {
                c++;
            }
            else
            {
                d=max(c,d);
                c=0;
            }
        }
        d=max(c,d);
         return d;
    } 
};