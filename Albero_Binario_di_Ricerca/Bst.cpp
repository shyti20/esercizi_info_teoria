#include "Bst.h"

Bst::Bst() {
    root = nullptr;
}

// forma ricorsiva
void Bst::preorderWalk(TreeNode* root) {
    if (root) {
        cout << endl << "Info: " << root->getInfo();
        preorderWalk(root->getLeft());
        preorderWalk(root->getRight());
    }
}

void Bst::preorderHelper() {
    preorderWalk(root);
}

void Bst::insert(TreeNode** root, int x) {
    if (!*root) {
        *root = new TreeNode(x);
    } else {
        if (x > (*root)->getInfo()) {
            insert((*root)->getPtrRight(), x);
        } else {
            insert((*root)->getPtrLeft(), x);
        }
    }
}

void Bst::insertHelper(int x) {
    insert(&root, x);
}

TreeNode* Bst::search(TreeNode* root, int x) {
    if (!root || root->getInfo() == x) return root;

    if (x < root->getInfo()) return search(root->getLeft(), x);
    
    return search(root->getRight(), x);
}

TreeNode* Bst::searchHelper(int x) {
    return search(root, x);
}

int Bst::maxIterative() {
    TreeNode* pAux  = root;

    while(pAux->getRight()) {
        pAux = pAux->getRight();
    }

    return pAux->getInfo();
}

int Bst::max(TreeNode* root) {
    if (!root->getRight())
        return max(root->getRight());
    return root->getInfo();
}

int Bst::maxHelper() {
    return max(root);
}

int Bst::min(TreeNode* root) {
    if (!root->getLeft())
            return max(root->getLeft());
        return root->getInfo();
}

int Bst::minHelper() {
    return min(root);
}