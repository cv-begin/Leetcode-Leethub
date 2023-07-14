class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // O(n) time and space modified neetcode solution
        int longest = 0;
        unordered_set<int> numSet(nums.begin(), nums.end());
        
        for (auto& num: numSet)
        {
            if(numSet.find(num-1) == numSet.end())
            {
                int length = 1;
                while(numSet.find(num+length) != numSet.end())
                {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};