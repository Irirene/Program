#pragma once
#include "Tree.h"
#include <vector>
using namespace std;

class Balance : public Tree
{
public:

    node* rotateright(node* p) override;
    node* rotateleft(node* q) override;
    node* balance(node* p) override; // балансировка узла p
    
    unsigned char height(node* p);
    int bfactor(node* p);
    void fixheight(node* p);


};

