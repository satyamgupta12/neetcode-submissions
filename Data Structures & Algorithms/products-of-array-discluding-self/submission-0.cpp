class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //division
    int product=1;
    int zero=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            zero++;
            continue;
        }
        product*=nums[i];
    }
    vector <int>res;
    for(int i=0;i<nums.size();i++){
        int div=product;
        if((nums[i]!=0 && zero>0) || (nums[i]==0) && zero>1 ){
           res.push_back(0); 
           continue;
        }
        else if(nums[i]==0 && zero==1){ res.push_back(div);
        continue;}

        else res.push_back(div/nums[i]);
    }
    return res;
    }
};
