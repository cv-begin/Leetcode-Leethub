class Solution {
public:
    bool isAnagram(string s, string t){
	if (s.size() != t.size()){
	return false;}
	
	unordered_map<int, int> count;
	
	for (auto ch: s)
	{
		count[ch] += 1;
	}	

	for (auto ch: t)
	{
		count[ch] -= 1;
		if (count[ch] < 0)
		{
			return false;
		}
	}	
	return true;
	}
};