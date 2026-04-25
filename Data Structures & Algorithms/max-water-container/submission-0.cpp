class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=INT_MIN;
        int i=0,j=heights.size()-1,area=0;
        for(int i=0;i<heights.size()-1;i++)
        {
            for(j=i+1;j<heights.size();j++)
            {
                area=min(heights[i],heights[j])*(j-i);
                ans=max(ans, area);
            }
        }
        return ans;
    }
};
