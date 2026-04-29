class Solution {
public:
    long long hours(vector<int>& piles, int mid)
    {
        long long h=0;
        for(int i:piles)
        {
            h+=ceil((double)i/mid);
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1, e=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(hours(piles, mid)<=h)
            {
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};
