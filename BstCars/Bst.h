#ifndef BST_H
#define BST_H
#include "TreeNode.h"

class Bst {
    private:
        TreeNode* root;

        void removeAll(TreeNode** root);
        void insert(TreeNode** root, Cars car);
        void remove(TreeNode** root, Cars car);
        TreeNode* search(TreeNode* root, Cars car);
        void preorderWalk(TreeNode* root);
        void postorderWalk(TreeNode* root);
        void simmetricWalk(TreeNode* root);

        void scesaValore();
    public:
        Bst();
        ~Bst();
        Bst(TreeNode* root);
        Bst(Cars info);

        void insertHelper(Cars car);
        void removeHelper(Cars car);
        TreeNode* search(Cars car);
        void preorderHelper();
        void postorderHelper();
        void simmetricHelper();
        void operator--();
};
#endif