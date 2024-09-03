class Solution {
public:
    int getLucky(string s, int k) {
        string first_res="";
        for(int i=0;i<s.size();i++){
            first_res+=to_string(s[i]-'a'+1);
        }
        while(k>0){
            int temp=0;
            for(char x:first_res){
                temp+=x-'0';
            }
            first_res=to_string(temp);
            k--;
        }
        return stoi(first_res);
    }
};