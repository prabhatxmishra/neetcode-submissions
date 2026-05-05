class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int s=0, e=n-1,ans=INT_MAX;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[s]<=nums[mid])
            {
                ans=min(ans,nums[s]);
                s=mid+1;
            }
            else
            {
                ans=min(ans,nums[mid]);
                e=mid-1;
            }
        }
        return ans;
    }
};
