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