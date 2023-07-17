class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        unordered_set<char> charSet;
        int l = 0;

        for(int r = 0; r < s.size(); r++)
        {
            while(charSet.find(s[r]) != charSet.end())
            {
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            res = max(res, static_cast<int>(charSet.size()));
        }        
        return res;
    }
};