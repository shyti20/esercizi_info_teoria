#include "TreeNode.h"

TreeNode::TreeNode() {
    right = nullptr;
    left = nullptr;
    // costruttore di default della classe Cars per l'ereditarieta`
}

TreeNode::TreeNode(Cars info) {
    this->info = info;
}

TreeNode::TreeNode(Cars info, TreeNode* right, TreeNode* left) {
    this->info = info;
    this->right = right;
    this->left = left;
}

void TreeNode::setInfo(Cars info) {
    this->info = info;
}

void TreeNode::setLeft(TreeNode* left) {
    this->left = left;
}

void TreeNode::setRight(TreeNode* right) {
    this->right = right;
}

Cars TreeNode::getInfo() {
    return info;
}

TreeNode* TreeNode::getLeft() {
    return left;
}

TreeNode** TreeNode::getPtrLeft() {
    return &left;
}

TreeNode* TreeNode::getRight() {
    return right;
}

TreeNode** TreeNode::getPtrRight() {
    return &right;
}
