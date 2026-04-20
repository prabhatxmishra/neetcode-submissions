class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;
        for(char a:s)
        {
            mp1[a]++;
        }
        for(char b:t)
        {
            mp2[b]++;
        }
        if(mp1==mp2) return true;
        return false;
    }
};
