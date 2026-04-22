class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int zeroCount=0, prod=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) zeroCount++;
            else
            {
                prod*=nums[i];
            }
        }

        if(zeroCount>1) return vector<int> (nums.size(),0);

        for(int i=0;i<nums.size();i++)
        {
            if(zeroCount>0)
            {
                if (nums[i] == 0) {
                    res.push_back(prod);
                } else {
                    res.push_back(0);
                }
            }
            else
            {
                res.push_back(prod/nums[i]);
            }
        }
        return res;
    }
};
