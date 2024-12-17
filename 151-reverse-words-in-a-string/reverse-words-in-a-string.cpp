class Solution {
public:
    string reverseWords(string s) {
        // string result;
        // int i=0;
        // int n=s.size();
        // while(i<n){
        //     while(i<n && s[i]==' '){
        //         i++;
        //     }
        //     if(i>=n) break;
        //     int j=i+1;
        //     while(j<n && s[j]!=' ') j++;
        //     string sub=s.substr(i,j-1);
        //     if(result.size()==0) result=sub;
        //     else result=sub+' '+result;
        //     i=j+1;
        // }
        // return result;
        reverse(s.begin(), s.end());
        int n = s.size();
        int left = 0;
        int right = 0;
        int i = 0;
        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;
            if (i == n)
                break;
            while (i < n && s[i] != ' ') {
                s[right++] = s[i++];
            }
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
        }
        s.resize(right - 1);
        return s;
    }
};