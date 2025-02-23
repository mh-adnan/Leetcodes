class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        multiset<int> ms;
        for(int i=0;i<m;i++)
        {
            ms.insert(nums1[i]);
        }

        for(int i=0;i<n;i++)
        {
            ms.insert(nums2[i]);
        }
        int i = 0;
        for(auto it= ms.begin();it!=ms.end();it++)
        {
            nums1[i++]= *it;
        }
    }
};