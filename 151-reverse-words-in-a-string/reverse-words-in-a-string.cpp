class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> str;
        while(ss>>word){
            str.push_back(word);
        }
        reverse(str.begin(),str.end());
        string ans;
        for(int i=0;i<str.size();i++){
            if(i>0) ans+=" ";
            ans+=str[i];
        }
        return ans;
    }
};