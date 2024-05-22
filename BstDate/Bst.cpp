#include "Bst.h"

Bst::Bst() {
    root = nullptr;
}

void Bst::removeAll(TreeNode** root) {
    if (root) {
        removeAll((*root)->getPtrLeft());
        removeAll((*root)->getPtrRight());
        delete *root;
        *root = nullptr;
    }
}

void Bst::preorderWalk(TreeNode* root) {
    if (root) {
        cout << endl << root->getInfo();
        preorderWalk(root->getLeft());
        preorderWalk(root->getRight());
    }
}
void Bst::postorderWalk(TreeNode* root) {
    if (root) {
        postorderWalk(root->getLeft());
        postorderWalk(root->getRight());
        cout << endl << root->getInfo();
    }
}

void Bst::simmectricWalk(TreeNode* root) {
    if (root) {
        simmectricWalk(root->getLeft());
        cout << endl << root->getInfo();
        simmectricWalk(root->getRight());
    }
}

void Bst::insert(TreeNode** root, Date date) {
    if (!*root) {
        *root = new TreeNode(date);
    } else {
        if (date > (*root)->getInfo())
            insert((*root)->getPtrRight(), date);
        else if (date < (*root)->getInfo())
            insert((*root)->getPtrLeft(), date);
    }
}

void Bst::preNode(TreeNode** root, TreeNode** pcanc) {
    if ((*root)->getRight())
        preNode((*root)->getPtrRight(), pcanc);
    else
        (*pcanc)->setInfo((*root)->getInfo());
        *pcanc = *root;
        *root = (*root)-getLeft();
}

void Bst::remove(TreeNode** root, Date date) {
    if (root) {
        TreeNode* pcanc;
        if ((*root)->getInfo() > date) 
            remove((*root)->getPtrLeft(), date);
        else if ((*root)->getInfo() < date) {
            remove((*root)->getPtrRight(), date);
        } else {
            pcanc = *root;
            if (!(*root)->getRight())
                *root = (*root)->getLeft();
            else if (!(*root)->getLeft())
                *root = (*root)->getRight();
            else
                preNode((*root)->getPtrLeft(), &pcanc);
            delete pcanc;
        }
        
    }
}

TreeNode* Bst::search(TreeNode* root, Date date) {
    if (!root || root->getInfo() == date) return root;

    if (date < root->getInfo()) return search(root->getLeft(), date);

    return search(root->getRight(), date);
}

Date Bst::max(TreeNode* root) {
    if (!root->getRight()) 
        return max(root->getRight());
    return root->getInfo();
}

Bst::~Bst() {
    removeAll(&root);
}

void Bst::preorderHelper() {
    preorderWalk(root);
}

void Bst::postorderHelper() {
    postorderWalk(root);
}
void Bst::simmetricHelper() {
    simmectricWalk(root);
}

void Bst::insertHelper(Date date) {
    insert(&root, date);
}

void Bst::removeHelper(Date date) {
    remove(&root, date);
}

TreeNode* Bst::searchHelper(Date date) {
    search(root, date);
}

Date Bst::maxHelper() {
    return max(root);
}
