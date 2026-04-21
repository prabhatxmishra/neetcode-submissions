class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        int longest=1, count;
        unordered_set<int> s;
        for(int x:nums)
        {
            s.insert(x);
        }
        for(int i:s)
        {
            count=1;
            if(s.find(i-1)==s.end())
            {
                int x=i;
                while(s.find(x+1)!=s.end())
                {
                    count++;
                    x++;
                }
            }
            longest=max(longest,count);
        }
        return longest;
    }
};
