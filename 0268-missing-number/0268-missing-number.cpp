class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        int s=0,s2=0;
        
        int n=nums.size();
    
        for(int i=0;i<n;i++){
            s+=nums[i];
            s2+=i+1;
             }
        return s2-s;
       
    }
};