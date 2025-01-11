class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k){
            return false;
        }
        vector<int> freq(26);
        for(char c:s){
            freq[c-'a']++;
        }
        int oddFreq=0;
        for(int i=0;i<26;i++){
            if(freq[i]&1){
                oddFreq++;
            }
        }
        return oddFreq<=k;
    }
};