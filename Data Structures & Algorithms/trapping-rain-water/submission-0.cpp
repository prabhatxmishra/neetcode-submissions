class Solution {
public:
    int trap(vector<int>& height) {
        int maxi=0,ans=0;
        vector<int> left(height.size(),0);
        vector<int> right(height.size());
        for(int i=0;i<height.size();i++)
        {
            left[i]=maxi;
            if(height[i]>maxi) maxi=height[i];
        }    
        maxi=0;
        for(int i=height.size()-1;i>=0;i--)
        {
            right[i]=maxi;
            if(height[i]>maxi) maxi=height[i];
        }
        int l=0, r=height.size()-1;
        for(int i=l;i<=r;i++)
        {
            ans+=max((min(left[i],right[i])-height[i]),0);
        }
        return ans;
    }
};
