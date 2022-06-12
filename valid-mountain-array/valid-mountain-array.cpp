class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int x=0,y=0,m=0,n=0,k=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>arr[i-1]&& x==0)
            {
                m=1;
                continue;
            }
            else if(arr[i]<arr[i-1]&&y==0)
            {
                n=1;
                x=1;
                continue;
            }
            else if(arr[i]>arr[i-1]&&x==1)
            {
                k=1;
                break;
            }
            else
            {
                k=1;
                break;
            }
        }
        if(k==1||m==0||n==0)
            return false;
        else 
            return true;
        
        
    }
};