void traverse(TreeNode* left,TreeNode* right, bool &ans ){
     if(left==nullptr&&right ==nullptr){
         return ;}
         if(left==nullptr||right==nullptr||left->val!=right->val){
             ans =false;
             return ;
         }
         
     traverse(left->left,right->right,ans);
     traverse(left->right,right->left,ans);
     cout<<left->val<<right ->val<<endl;
    
 }
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
      TreeNode* left =root->left;
      TreeNode* right  =root->right ; 
      bool ans=true ;
      traverse(left ,right ,ans);
      
      return ans;
       
    }
};
