class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        int open_min =0;
        int open_max=0;
        for(int i=0;i<n;i++){
            char curr=s[i];
 
            if(curr=='('){
                open_min++;
                open_max++;
            }
            else if(curr=='*'){
                open_max++;
                open_min--;
            }
            else{
                open_min--;
                open_max--;
            }
             if(open_min < 0){
                open_min = 0;
            }
            
            // FIX 3: Catch too many closed brackets immediately
            if(open_max < 0){
                return false;
            }
        }
        int res= open_min==0 ? true :false;
        return res;
    }
};
