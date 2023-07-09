class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashed;
        for (int num : nums) {
            if (hashed.count(num)) {
                return true;
            }
            hashed[num] = 1;
        }
        return false;
    }
};