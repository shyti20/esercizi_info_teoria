#ifndef BST_H
#define BST_H

#include "TreeNode.h"

class Bst {
    private:
        TreeNode* root;

        void removeAll(TreeNode** root);
        void preorderWalk(TreeNode* root);
        void postorderWalk(TreeNode* root);
        void simmectricWalk(TreeNode* root);
        void insert(TreeNode** root, Date date);
        void remove(TreeNode** root, Date date);
        void preNode(TreeNode** root, TreeNode** pcanc);
        TreeNode* search(TreeNode* root, Date date);

        Date max(TreeNode* root);
    public:
        Bst();
        ~Bst();

        void preorderHelper();
        void postorderHelper();
        void simmetricHelper();
        void insertHelper(Date date);
        void removeHelper(Date date);
        TreeNode* searchHelper(Date date);

        Date maxHelper();
};
#endif