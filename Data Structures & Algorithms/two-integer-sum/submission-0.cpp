class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int required=target-nums[i];
            if(mp.contains(required)){
                return {mp[required],i};
            }
                        mp[nums[i]]=i;
        }
    }
};
