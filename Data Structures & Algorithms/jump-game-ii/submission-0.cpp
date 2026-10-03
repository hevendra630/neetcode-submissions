class Solution {
public:
    int jump(vector<int>& nums) {
            int jumps=0;
            int max_reachable=0;
            int current_window=0;
            for(int i=0;i<nums.size()-1;i++){
               max_reachable=max(max_reachable,i+nums[i]);
                if(i==current_window){
                    jumps+=1;
                    current_window=max_reachable;
                }

            }
            return jumps;
        }
        
    
};
