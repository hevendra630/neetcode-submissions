class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[n-1];
        if(n==2) return max(nums[0],nums[1]);
        vector<int>dp(n,0);
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0]);
        for(int i=2;i<n-1;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        int case1=dp[n-2];
        dp[1]=nums[1];
        dp[2]=max(nums[1],nums[2]);
        for(int i=3;i<n;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        int case2=dp[n-1];

        return max(case1,case2);
        
    }
};
