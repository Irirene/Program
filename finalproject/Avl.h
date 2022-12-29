#pragma once
#include "Balance.h"
#include "Tree.h"
#include "Node.h"
class Avl : public Balance
{
public:
	node* insert(node* p, int k); // вставка ключа k в дерево с корнем p
	node* findmin(node* p); // поиск узла с минимальным ключом в дереве p
	node* removemin(node* p); // удаление узла с минимальным ключом из дерева p
	node* remove(node* p, int k); // удаление ключа k из дерева p

};

