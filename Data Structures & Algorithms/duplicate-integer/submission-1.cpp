class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> numSet;
        for(int i:nums)
        {
            if(numSet.find(i)!=numSet.end()) return true;
            numSet.insert(i);
        }
        return false;
    }
};