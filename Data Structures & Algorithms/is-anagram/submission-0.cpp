class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length())
        return false;
        unordered_map<char,int>hashy;
        for (char c:s)
        {
            hashy[c]++;
        }
        for (char c:t)
        {
            hashy[c]--;
            if (hashy [c]<0)
            {
                return false;
            }
        }
        return true;
    }
};
