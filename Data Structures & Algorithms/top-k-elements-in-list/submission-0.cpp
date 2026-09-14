class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>valfreq;
        for(const auto &it: mpp){
            valfreq.push_back({it.second,it.first});
        }
        //sorting
        sort(valfreq.rbegin(),valfreq.rend());
        //retrieving
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(valfreq[i].second);
        }
        return res;
    }
};
