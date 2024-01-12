class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        vector<int> a=edges[0];
        vector<int> b=edges[1];
        
        int com=-1;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(a[i]==b[j]){
                    com=a[i];
                }
            }
        }
        if(com==-1){
            return -1;
        }
        else {
            for(int i=0;i<edges.size();i++){
              if(com!=edges[i][0]&&com!=edges[i][1]){
                  com=-1;
                break ;
              }
              
            }
            if(com==-1){
                return -1;
            }
            else{
                return com;
            }
        }

    }
};
