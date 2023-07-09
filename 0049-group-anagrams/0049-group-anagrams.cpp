class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grp_angrm_map;

        for (auto& word : strs) {
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end());
            grp_angrm_map[sorted_word].push_back(move(word));
        }

        vector<vector<string>> grp_angrm_list;
        for (auto& key_val : grp_angrm_map) {
            grp_angrm_list.push_back(move(key_val.second));
        }

        return grp_angrm_list;
    }
};