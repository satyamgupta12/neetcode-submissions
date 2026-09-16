class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);
        
       
        res[n-1]=1;
        for(int j=n-2;j>=0;j--){
            res[j]=res[j+1]*nums[j+1];
        }
        int temp=1;
        for(int i=0;i<n;i++){
            res[i]=(res[i]*temp);
            temp=temp*nums[i];
        }
        return res;
    }
};
