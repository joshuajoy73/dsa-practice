int diameter(TreeNode* root, int &maxi) {
        if (root == nullptr) {
            return 0;
        }

        int leftHeight = diameter(root->left, maxi);
        int rightHeight = diameter(root->right, maxi);

        maxi = max(maxi, leftHeight + rightHeight);

        return max(leftHeight, rightHeight) + 1;
    }
 class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        diameter(root, maxi);
        return maxi;
    }};
