class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // # Bucket sort
        unordered_map<int, int> counts;
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> res;

        for (auto& num: nums)
        {
            counts[num] += 1;
        }
        for (auto& key_val: counts)
        {
            freq[key_val.second].push_back(key_val.first);
        }

        for (int i = freq.size() - 1 ; i >= 0 ; i--)
        {
            for (auto& num: freq[i])
            {
                res.push_back(num);
                if (res.size() == k)
                {
                    return res;
                }
            }
        }
        return {};
    }
};