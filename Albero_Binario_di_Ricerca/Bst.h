#ifndef BTS_H
#define BTS_H

#include "TreeNode.h"
#include <iostream>

using namespace std;

class Bts {
    private:
        TreeNode* root;
        void preorderWalk(TreeNode* root);
    public:
        Bts();
        ~Bts();
        void preorderHelper();



};
#endif