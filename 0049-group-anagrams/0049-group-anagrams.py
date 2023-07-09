class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        grp_angrm_map = defaultdict(list)

        for word in strs:
            sorted_word = ''.join(sorted(word))
            grp_angrm_map[sorted_word].append(word)
        
        grp_angrm_list = []

        for val in grp_angrm_map.values():
            grp_angrm_list.append(val)

        return grp_angrm_list

        