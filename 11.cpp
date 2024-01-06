 class Solution {
public:
    void minDepthHelper(TreeNode* root, int depth, int &minDepth) {
        if (root != nullptr) {
            if (root->left == nullptr && root->right == nullptr) {
                minDepth = std::min(minDepth, depth);
            } else {
                minDepthHelper(root->left, depth + 1, minDepth);
                minDepthHelper(root->right, depth + 1, minDepth);
            }
        }
    }

    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int minD = INT_MAX;
        minDepthHelper(root, 1, minD);
        return minD;
    }
};

