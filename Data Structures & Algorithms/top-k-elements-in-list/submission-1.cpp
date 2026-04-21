class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> res;

        for(int n : nums) {
            mpp[n]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);

        for(auto it : mpp) {
            int f = it.second;
            int n = it.first;
            bucket[f].push_back(n);   
        }

        for(int i = bucket.size() - 1; i >= 0; i--) {
            for(int num : bucket[i]) {
                res.push_back(num);
                if(res.size() == k) return res;
            }
        }

        return res;
    }
};