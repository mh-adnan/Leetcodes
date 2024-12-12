class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        vector<long long int> v1, v2;
        for (int i = 0; i < nums.size(); i++)
        {
           
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](const auto &a, const auto &b)
             { return a.second > b.second; });

    for(int i=0;i<v.size();i++)
    {
        return v[i].first;
        break;
    }
    return -1;
    }
};