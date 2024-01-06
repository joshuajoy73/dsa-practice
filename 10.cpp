void func(TreeNode* root,int count,int &maxD ){
if(root==nullptr){
        maxD=max(maxD,count) ;
 return ;}
else{
func(root->left,count+1,maxD);
func(root->right,count +1,maxD);}
 }
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int maxD=0;
       func(root,0,maxD);
        return maxD; }
};
