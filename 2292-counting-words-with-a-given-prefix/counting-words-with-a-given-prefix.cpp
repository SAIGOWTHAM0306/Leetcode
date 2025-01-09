class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int prefix_len=pref.size(),count=0;
        for(string str:words){
            if(pref==str.substr(0,prefix_len)){
                count++;
            }
        }
        return count;
    }
};