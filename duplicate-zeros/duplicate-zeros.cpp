class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int f=n;
        for(int i=0;i<f;i++)
        {
            if(arr[i]==0&&i!=f-1)
            {
               arr.insert(arr.begin()+i,0); 
                i++;
            }

        }
        int x=arr.size();
        arr.erase(arr.begin()+f,arr.begin()+x);
        
    }
};