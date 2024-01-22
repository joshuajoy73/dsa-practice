class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n =score.size();
        unordered_map<int ,string>b;

        priority_queue<int,vector<int>>a;
        for(int i=0;i<n;i++){
            a.push(score[i]);
            b[score[i]]="0";
        }
       
        for(int i=0;i<n;i++){
            if(i==0){
               b[a.top()] ="Gold Medal";
               a.pop();
            }
            if(i==1){
                b[a.top()]="Silver Medal";
             a.pop();
            }
            if(i==2){
                b[a.top()]="Bronze Medal";
                a.pop();
            }
            if(i>2){
                b[a.top()]=to_string(i+1);
                a.pop();
                cout<<i<<endl;
            }
        }
        vector<string> ans;
        for(int i=0;i<n;i++){
ans.push_back(b[score[i]]);
        }
        return ans;
    }
};
