#ifndef TREENODE_H
#define TREENODE_H
#include "Cars.h"

class TreeNode {
    private:
        TreeNode* right;
        TreeNode* left;
        Cars info;
    public:
        TreeNode();
        TreeNode(Cars info);
        TreeNode(Cars info, TreeNode* right, TreeNode* left);
        void setInfo(Cars info);
        void setLeft(TreeNode* left);
        void setRight(TreeNode* right);
        Cars getInfo();
        TreeNode* getLeft();
        TreeNode** getPtrLeft();
        TreeNode* getRight()
        TreeNode** getPtrRight();
};
#endif