class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m,m2;
    
        if(s.size()!=t.size())
            return false;
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            m2[t[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(m[s[i]]!=m2[s[i]])
            {
                k=1;
                break;
            }
        }
        if(k==1)
            return false;
        else
            return true;
    }
};