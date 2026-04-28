class Solution {
public:
    int trap(vector<int>& height) {
        int i=0,j=height.size()-1,maxi=0,maxj=0,ans=0;
        while(i<j)
        {
            if(height[i]<=height[j])
            {
                ans+=max(maxi-height[i],0);
                maxi=max(maxi, height[i]);
                i++;
            }
            else
            {
                ans+=max(maxj-height[j],0);
                maxj=max(maxj,height[j]);
                j--;
            }
        }
        return ans;
    }
};
