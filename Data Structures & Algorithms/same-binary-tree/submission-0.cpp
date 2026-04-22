class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // 1️⃣ Both null → same
        if (p == nullptr && q == nullptr) {
            return true;
        }

        // 2️⃣ One null → not same
        if (p == nullptr || q == nullptr) {
            return false;
        }

        // 3️⃣ Values different → not same
        if (p->val != q->val) {
            return false;
        }

        // 4️⃣ Recursively check left & right
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};