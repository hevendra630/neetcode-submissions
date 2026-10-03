class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reachable=0;
        for(int i=0;i<nums.size();i++){
            if(i>max_reachable)
            return false;
            int currjump=i+nums[i];
            max_reachable=max(max_reachable,currjump);
        }
        return true;
    }
};
