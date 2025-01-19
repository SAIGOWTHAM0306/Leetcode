class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int res=0;
        for(int arr:derived){
            res^=arr;
        }
        return res==0;
    }
};