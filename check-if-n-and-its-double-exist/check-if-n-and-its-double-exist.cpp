class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map <int,bool> m;
        int k=0;
        for(int i=0;i<arr.size();i++)
        {
            if(m[arr[i]*2]==1||(m[arr[i]/2]==1&&arr[i]%2==0))
            {
                k=1;
                break;
            }
            else
                m[arr[i]]=1;
        }
        if(k==1)
            return true;
        else 
            return false;
    }
};