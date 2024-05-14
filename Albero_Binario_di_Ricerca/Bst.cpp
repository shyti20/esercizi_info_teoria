#include "Bst.h"

Bst::Bst() {
    root = nullptr;
}

Bst::~Bst() {
    BstPrivate(root);
}

void Bst::BstPrivate(TreeNode* root) {
    if (root) {
        BstPrivate(root->getLeft());
        BstPrivate(root->getPtrRight());
        delete root;
    }
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

void Bst::postorderWalk(TreeNode* root) {
    if (root) {
        postorderWalk(root->getLeft());
        postorderWalk(root->getRight());
        cout << endl << "Info: " << root->getInfo();
    }
}

void Bst::postorderHelper() {
    postorderWalk(root);
}

void Bst::simmetricorderWalk(TreeNode* root) {
    if (root) {
        simmetricWalk(root->getLeft());
        cout << endl << "Info: " << root->getInfo();
        simmetricWalk(root->getRight());
    }
}

void Bst::simmetricorderHelper() {
    inordertraversalWalk(root);
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

int Bst::contTreeNode(TreeNode* root, int i) {
    if (root) {
        i = contTreeNode(root->getLeft(), i);
        i = contTreeNode(root->getRight(), i);
        return ++i;
    }
    return i;
}

int Bst::contTreeNodeHelper() {
    return contTreeNode(root, 0);
}

int Bst::simmetricorderSum(TreeNode* root, int sum) {
    if (root) {
        sum = simmetricorderSum(root->getLeft(), sum);
        sum += root->getInfo();
        sum = simmetricorderSum(root->getRight(), sum);
    }
    return sum;
}

int Bst::simmetricorderSumHelper() {
    return simmetricorderSum(root, 0);
}

