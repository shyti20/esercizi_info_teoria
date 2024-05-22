#ifndef TREENODE_H
#define TREENODE_H
#include "Date.h"

class TreeNode {
    private:
        TreeNode* left;
        TreeNode* right;
        Date info;
    public:
        TreeNode();
        TreeNode(Date info);
        TreeNode(Date info, TreeNode* left, TreeNode* right);
        void setInfo(Date info);
        void setLeft(TreeNode* left);
        void setRight(TreeNode* right);
        Date getInfo();
        TreeNode* getLeft();
        TreeNode* getRight();
        TreeNode** getPtrLeft();
        TreeNode** getPtrRight();
};
#endif