class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int idx=0;
        int tidx=str2.length();
        for(char cchar:str1){
            if((idx<tidx)&&(str2[idx]-cchar+26)%26<=1){
                idx++;
            }
        }
        return tidx==idx;
    }
};