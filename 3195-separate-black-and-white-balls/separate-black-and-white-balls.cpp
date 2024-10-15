class Solution {
public:
    long long minimumSteps(string s) {
        int n=s.length();
        int last=0;
        long swapCount=0;
        for(int curr=0;curr<n;curr++){
            if(s[curr]=='0'){
                swapCount+=(curr-last);
                last++;
            }
        }
        return swapCount;
    }
};