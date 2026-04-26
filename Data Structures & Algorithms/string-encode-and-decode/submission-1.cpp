class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string s:strs)
        {
            res+=to_string(s.size())+"#"+s;
        }
        return res;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> ans;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#') j++;
            int len=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,len);
            ans.push_back(word);
            i=j+len+1;
        }
        return ans;
    }
};
