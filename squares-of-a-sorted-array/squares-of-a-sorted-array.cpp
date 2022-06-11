class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> num(n);
        int low=0, high=n-1,index=n-1;
        while(low<=high)
        {
            if(abs(nums[low])>abs(nums[high]))
            {
                num[index--]=(nums[low]*nums[low]);
                low++;
            }
            else
            {
                num[index--]=(nums[high]*nums[high]);
                high--;
            }
        }
        // sort(num.begin(),num.end());
        return num;
    }
};