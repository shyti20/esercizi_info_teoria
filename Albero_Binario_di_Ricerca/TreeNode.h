#ifndef TREENODE_H
#define TREENODE_H

class TreeNode {
    private:
        int info;
        TreeNode* left;
        TreeNode* right;
    public:
        TreeNode();
        TreeNode(int i);
        TreeNode(int i, TreeNode* sx, TreeNode* dx);
        TreeNode* getLeft();
        TreeNode** getPtrLeft();
        TreeNode* getRight();
        TreeNode** getPtrRight();
        int getInfo();
        void setLeft(TreeNode* sx);
        void setRight(TreeNode* dx);
        void setInfo(int i);
        void setTreeNode(int i, TreeNode* sx, TreeNode* dx);
};
#endif