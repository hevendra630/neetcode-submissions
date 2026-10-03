class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool foundx=false;
        bool foundy=false;
        bool foundz=false;
        for(int i=0;i<triplets.size();i++){

                if(triplets[i][0]<=target[0] && triplets[i][1]<=target[1] && triplets[i][2]<=target[2]){
                    if(triplets[i][0]==target[0]){
                        foundx=true;
                    }
                    if(triplets[i][1]==target[1]){
                        foundy=true;
                    }
                    if(triplets[i][2]==target[2]){
                        foundz=true;
                    }
                    if(foundx && foundy && foundz) return true;
                }
                else{
                    continue;
                }
            
        }
        return false;
        
    }
};
