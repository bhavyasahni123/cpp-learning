class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        for(int j=0;j<=nums.size();j++){
            bool found=false;
            for(int i=0;i<=nums.size()-1;i++){
                if(nums[i]==j){
                    found=true;
                    break;
                    
                }
            }
            if(found!=true){
            return j;
            }
        }
        return -1;
    }
};