#include "Avl.h"
using namespace std;

node* Avl::insert(node* p, int k)
{
    if (!p) return new node(k);
    if (k < p->key)
        p->left = insert(p->left, k);
    else
        p->right = insert(p->right, k);
    return balance(p);
}

node* Avl::findmin(node* p)
{
    return p->left ? findmin(p->left) : p;
}

node* Avl::removemin(node* p)
{
    if (p->left == 0) 
        return p->right;
    p->left = removemin(p->left);
    return balance(p);
}

node* Avl::remove(node* p, int k)
{
    if (!p) return 0;
    if (k < p->key)
        p->left = remove(p->left, k);
    else if (k > p->key)
        p->right = remove(p->right, k);
    else // k == p->key
    {
        node* q = p->left;
        node* r = p->right;
        delete p;
        if (!r) return q;
        node* min = findmin(r);
        min->right = removemin(r);
        min->left = q;
        return balance(min);
    }
    return balance(p);
}

