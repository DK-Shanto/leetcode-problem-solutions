class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int d=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            c=int(log10(nums[i])+1);
            if(c%2==0)
                d++;
        }
        return d;
    }
};