class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int longest=0, lastMin=INT_MAX, count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==lastMin) continue;
            if(nums[i]-1==lastMin)
            {
                count+=1;
                lastMin=nums[i];
            }
            else if(nums[i]-1!=lastMin)
            {
                count=1;
                lastMin=nums[i];
            }
            longest=max(longest, count);
        }
        return longest;
    }
};
