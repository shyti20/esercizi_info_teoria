#include "Bst.h"

Bst::Bst() {
    root = nullptr;
}

Bst::~Bst() {
    removeAll(&root);
}

Bst::Bst(TreeNode* root) {
    this->root = root;
}

Bst::Bst(Cars info) {
    root->setInfo(info);
}

void Bst::removeAll(TreeNode** root) {
    if (*root) 
        removeAll((*root)->getPtrLeft());
        removeAll((*root)->getPtrRight());
        delete root;
        *root = nullptr;
}

void Bst::insert(TreeNode** root, Cars car) {
    if (!*root) {
        *root = new TreeNode(car);
    } else {
        if ((*root)->getInfo().getTarga() < car.getTarga())
            insert((*root)->getPtrRight());
        else if ((*root)->getInfo() > car.getTarga())
            insert((*root)->getPtrRight());
    }
}

void Bst::remove(TreeNode** root, Cars car) {

}

TreeNode* Bst::search(TreeNode* root, Cars car) {
    if (!root || root->getInfo().getTarga() == car.getTarga())
        return root;
    else if (root->getInfo().getTarga() > car->getTarga())
        return search(root->getPtrLeft(), car);
    return search(root->getPtrRight(), car);
}

void Bst::preorderWalk(TreeNode* root) {
    if (root) 
        cout << endl << root->getInfo();
        preorderWalk(root->getLeft());
        preorderWalk(root->getRight());
}

void Bst::postorderWalk(TreeNode* root) {
    if (root) 
        postorderWalk(root->getLeft());
        postorderWalk(root->getRight());
        cout << endl << root->getInfo();
}

void Bst::simmetricWalk(TreeNode* root) {
    if (root) 
        simmetricWalk(root->getLeft());
        cout << endl << root->getInfo();
        simmetricWalk(root->getRight());
}

void Bst::scesaValore(TreeNode* root, int targa) {
    if (root || root->getInfo().getTarga() != targa) {
        if (root->getInfo().getTarga() > targa)
            scesaValore(root->getPtrLeft(), targa);
        if (root->getInfo().getTarga() < targa);
            scesaValore(root->getPtrRight(), targa);
        root->getInfo().setPrezzo(root->getInfo().getPrezzo() - root->getInfo().getPrezzo() * 0.05);
    }
}

void Bst::insertHelper(Cars car) {
    insert(&root, car);
}

void Bst::removeHelper(Cars car) {
    remove(&root, car);
}

TreeNode* Bst::search(Cars car) {
    return search(&root, car);
}

void Bst::preorderHelper() {
    preorderWalk(root);
}

void Bst::postorderHelper() {
    postorderWalk(root);
}

void Bst::simmetricHelper() {
    simmetricWalk(root);
}

void Bst::operator--() {
    int tempTarga;
    cout << endl << "Inserisci la targa: ";
    cin >> tempTarga;
    scesaValore(root, tempTarga);
}
