class Solution {
public:

    bool rev(string s)
    {
        int n=s.size()-1;
        int i=0,j=n;
        while(i<=j)
        {
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        string s2="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z')
            || (s[i]>='0' && s[i]<='9'))
            {
                s2+=s[i];
            }
        }
        if(rev(s2)) return true;
        return false;
    }
};
