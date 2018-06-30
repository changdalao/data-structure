#pragma once

template<class K,class V>
struct AVLTreeNode{
	AVLTreeNode* _left;
	AVLTreeNode* _right;
	K key;
	V value;
};

template<class K,class V>
class AVLTree{
	typedef AVLTreeNode<K,V> Node;
public:
	AVLTree(){

	}
private:
	Node* _root;
};
