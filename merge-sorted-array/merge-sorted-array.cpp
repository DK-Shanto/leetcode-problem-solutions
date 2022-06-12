class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int low=m-1,high=n-1,index=m+n-1;
        while(low>=0&&high>=0)
        {
            if(nums1[low]>=nums2[high])
            {
                nums1[index]=nums1[low];
                low--;
                index--;
            }
            else
            {
                nums1[index]=nums2[high];
                high--;
                index--;
            }
        }
        while(high>=0)
        {
            nums1[index]=nums2[high];
            index--;
            high--;
        }
        
    }
};