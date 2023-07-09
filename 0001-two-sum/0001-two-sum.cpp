class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashed;
        for (int i = 0 ; i < nums.size() ; i++){
            int x = target - nums[i];
            if (hashed.count(x)){
                return {i, hashed[x]};
            }
                
            hashed[nums[i]] = i;
        }
        return {};
    }
};