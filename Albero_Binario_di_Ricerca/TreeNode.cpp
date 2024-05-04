#include "TreeNode.h"

TreeNode::TreeNode() {
    info = 0;
    left = right = nullptr;
}

TreeNode::TreeNode(int i) {
    info = i;
    left = right = nullptr;
}

TreeNode::TreeNode(int i, TreeNode* sx, TreeNode* dx) {
    info = i;
    left = sx;
    right = dx;
}

TreeNode* TreeNode::getLeft() {
    return left;
}

TreeNode* TreeNode::getRight() {
    return right;
}

void TreeNode::setLeft(TreeNode* sx) {
    left = sx;
}

void TreeNode::setRight(TreeNode* dx) {
    right = dx;
}

void TreeNode::setInfo(int i) {
    info = 1;
}

void TreeNode::setTreeNode(int i, TreeNode* sx, TreeNode* dx) {
    info = i;
    left = sx;
    right = dx;
}

