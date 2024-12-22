class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int n=nums.size();
        int hash[101]={0};
        for(int i=0;i<n;i++){
            hash[nums[i]]+=1;
        }


        int sum=0;
        for(int i=0;i<101;i++){
            if(hash[i]==1){
                sum=sum+i;
            }
        }
        return sum;
    }
};