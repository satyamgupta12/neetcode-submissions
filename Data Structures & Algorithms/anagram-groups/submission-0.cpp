class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<strs.size();i++){
            vector<int>count(26,0);
            for(int j=0;j<strs[i].size();j++){
                count[strs[i][j]-'a']++;
            }
            string unikey=to_string(count[0]);
            for(int j=0;j<26;j++){
                unikey=unikey+","+to_string(count[j]);
            }
            mpp[unikey].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(const auto &it:mpp){
            res.push_back(it.second);
        }
        return res;
    }
};
