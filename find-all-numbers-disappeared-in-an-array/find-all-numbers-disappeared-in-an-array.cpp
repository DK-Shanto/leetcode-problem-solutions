class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> m;
	for(int i=1;i<=nums.size();i++)
	{
		m[i]=0;
	}
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        map<int,int>::iterator itr;
        for(itr=m.begin();itr!=m.end();++itr)
        {
            if(itr->second==0)
            {
                v.push_back(itr->first);
            }
            
        }
        return v;
    }
};