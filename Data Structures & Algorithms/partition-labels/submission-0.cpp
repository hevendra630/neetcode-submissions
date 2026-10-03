class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastseen(26,-1);
        vector<int>res={1};
        for(int i=0;i<s.size();i++){
            lastseen[s[i]-'a']=i;
        }
        int highest=lastseen[s[0]-'a'];
        for(int i=1;i<s.size();i++){
  
            if(i<=highest) res.back()++;
            else{
                res.push_back(1);
            }
                      highest=max(highest,lastseen[s[i]-'a']);
            
        }
        return res;
    }
};
