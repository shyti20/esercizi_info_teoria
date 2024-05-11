#ifndef BST_H
#define BST_H

#include "TreeNode.h"
#include <iostream>

using namespace std;

class Bst {
    private:
        TreeNode* root;
        void preorderWalk(TreeNode* root);
        void insert(TreeNode** root, int x);
        TreeNode* search(TreeNode* root, int x);
        int max(TreeNode* root);
        int min(TreeNode* root);
    public:
        Bst();
        ~Bst();
        void preorderHelper();
        void insertHelper(int x);
        TreeNode* searchHelper(int x);
        int maxHelper();
        int minHelper();
        int minIterative();
        int maxIterative();
};
#endif