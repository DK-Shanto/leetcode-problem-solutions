class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> m;
        int k=0,idx;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]==1)
            {
                k=1;
                idx=i;
                break;
            }    
        }
        return k==1? idx:-1;
    }
};