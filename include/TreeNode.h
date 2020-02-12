#ifndef TREENODE_H
#define TREENODE_H


// tree node
template <typename T>
class TreeNode {
public:
	TreeNode();
	// copy constructor
	TreeNode(const T&);
	// desctructor
	~TreeNode();

	// parent
	TreeNode<T> *parent;
	// first, last child
	TreeNode<T> *first_child, *last_child;
	// brothers
	TreeNode<T> *prev_sibling, *next_sibling;

	// the data
	T data;
};


#endif // TREENODE_H
