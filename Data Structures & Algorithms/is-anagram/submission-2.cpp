class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return 0;
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp.find(t[i])==mpp.end()){
                return 0;
            }
            else{
                mpp[t[i]]--;
                if(mpp[t[i]]==0) mpp.erase(t[i]);
            }
        }
        return 1;
    }
};
