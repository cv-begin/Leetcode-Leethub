class Solution {
public:
    bool isPalindrome(string s) {
    //     # neetcode solution - two pointer

    int l = 0;
    int r = s.size() - 1;

    while (l < r)
    {
        while((l < r) && !(IsAlnum(s[l])))
        {
            l++;
        }
        while((l < r) && !(IsAlnum(s[r])))
        {
            r--;
        }

        if(tolower(s[l]) != tolower(s[r]))
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
    }

    bool IsAlnum(char c){
        return (isdigit(c) || isalpha(c));
    }

};