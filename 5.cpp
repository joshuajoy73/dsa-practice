void preorders(Node* root ,vector<int > &ans){ 
 ans.push_back(root->val);
    if(root->children.empty()){
        return ;
    }   
    int n =root->children.size();
    for(int i=0;i<n;i++){
   preorders(root->children[i],ans);}
}
class Solution {
public:
    vector<int> preorder(Node* root) {
       vector<int> ans ; 
       if(root==nullptr){
           return ans;
       }
       else{
       preorders(root,ans);
       return ans ;}
    }
};
