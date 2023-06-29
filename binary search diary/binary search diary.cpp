#include <iostream>
#include <string> 
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor for the node class Node
	(string i, Node* 1, Node* r)
	{
		info = i;
		leftchild = 1;
		right child = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL; // Initializing ROOT to null
	}

	void insert(string element) // Insert a node in the binary search tree
	{
		Node* newNode = new Node (element, NULL, NULL); // Allocate memory for the new node newNode->info = element; // Assign value to the data field of the new node newNode->left child = NULL; // Make the left child of the new node point to NULL newNode->rightchild = NULL; // Make the right child of the new node point to NULL
		newNode->info = element; // assign value to the data field of the new node
		newNode->leftchild = NULL; //make to the data field of the new node
	    search (element, parent, current Node); // Locate the node which will be the parent of the node to be inserted
	   if (parent == NULL) // If the parent is NULL (Tree is empty)