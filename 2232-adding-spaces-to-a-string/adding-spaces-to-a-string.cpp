class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int m=s.size();
        int n=spaces.size();
        string res;
        int first=0;
        int second=0;
        while(first<m){
            if(second<n and first==spaces[second]){
                res.push_back(' ');
                second++;
            }
            res.push_back(s[first]);
            first++;
        }
        return res;
    }
};