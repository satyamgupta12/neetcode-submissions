class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size()==0) return "";
        string enco;
        for(auto &it : strs){
            int num=it.size();
            enco.append(to_string(num));
            enco.push_back('#');
            enco.append(it);
        }
        return enco;
    }

    vector<string> decode(string s) {
        if(s.size()==0) return {};
        vector<string>res;

        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#') j++;
            int num=stoi(s.substr(i,j-i));
            i=j+1;
            res.push_back(s.substr(i,num));
            i=i+num;
        }
        return res;
    }
};
