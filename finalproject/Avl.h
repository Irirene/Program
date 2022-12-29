#pragma once
#include "Balance.h"
#include "Tree.h"
#include "Node.h"
class Avl : public Balance
{
public:
	node* insert(node* p, int k); // ������� ����� k � ������ � ������ p
	node* findmin(node* p); // ����� ���� � ����������� ������ � ������ p
	node* removemin(node* p); // �������� ���� � ����������� ������ �� ������ p
	node* remove(node* p, int k); // �������� ����� k �� ������ p

};

