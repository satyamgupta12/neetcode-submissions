class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size()==0) return "";
        vector<int>len;
        string final;
        for(auto &it : strs){
            len.push_back(it.size());
        }
        for(auto &it : len){
            final.append(to_string(it));
            final.push_back(',');
        }
        final.push_back('#');
        for(auto &it:strs){
            final.append(it);
        }
        return final;
    }

    vector<string> decode(string s) {
        if(s.size()==0) return {};
        vector<int>len;
        vector<string>res;
        int i=0;
        while(s[i]!='#'){
            int j=i;
            while(s[j]!=',') j++;
            len.push_back(stoi(s.substr(i,j-i)));
            i=j+1;
        }
        i++;
        for(int z : len ){
            res.push_back(s.substr(i,z));
            i=i+z;
        }
        return res;
    }
};
