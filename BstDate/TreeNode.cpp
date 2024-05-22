#include "TreeNode.h"

TreeNode::TreeNode() {
    left = nullptr;
    right = nullptr;
    // costruttore di default della classe date per ereditarieta
}

TreeNode::TreeNode(Date info) {
    this->info = info;
}

TreeNode::TreeNode(Date info, TreeNode* left, TreeNode* right) {
    this->info = info;
    this->left = left;
    this->right = right;
}

void TreeNode::setInfo(Date info) {
    this->info = info;
}

void TreeNode::setLeft(TreeNode* left) {
    this->left = left;
}

void TreeNode::setRight(TreeNode* right) {
    this->right = right;
}

Date TreeNode::getInfo() {
    return info;
}

TreeNode* TreeNode::getLeft() {
    return left;
}

TreeNode* TreeNode::getRight() {
    return right;
}

TreeNode** TreeNode::getPtrLeft() {
    return &left;
}

TreeNode** TreeNode::getPtrRight() {
    return &right;
}