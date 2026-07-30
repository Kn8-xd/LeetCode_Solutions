/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// Helper to find the minimum value node in the right subtree
int getInorderSuccessor(struct TreeNode* node) {
    while (node && node->left != NULL) {
        node = node->left;
    }
    return node->val;
}

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor
        int successorVal = getInorderSuccessor(root->right);
        root->val = successorVal;
        root->right = deleteNode(root->right, successorVal);
    }

    return root;
}
