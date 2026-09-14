class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // attempting by min heap
        unordered_map<int,int>mpp;
        for (auto it : nums){
            mpp[it]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;// maxheap change to min heap
    for(auto it : mpp){
        pq.push({it.second,it.first});
        if(pq.size()>k){
            pq.pop();
        }
        
    }
    vector<int>ans;
    for(int i=0;i<k;i++){ 
        ans.push_back(pq.top().second);
        pq.pop();   
    }
    return ans;
    }
};
