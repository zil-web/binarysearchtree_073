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
		newNode->rightchild = NULL; // make the right child of the new node point to null

		node* parent = NULL;
		node* currentNode = NULL;
		search(element, parent, currentNode); //locate the Node which will be the parent of the node to be inserted

		if (parent == NULL) //if the parent is NULL (tree is empty)
		{
			ROOT = newNode; //mark the new node as ROOT
			return; //exit
		}

		if (element < parent->info) //if the value in the data field of the new node id less than that of the parent
		{
			parent->leftchild = newNode; //make the left child of the parent point to the new node
		}
		else if (element > parent->info) // if the value in the data field of the new node is greater than that of the parent 
		{
			parent->rightchild = newNode; //make