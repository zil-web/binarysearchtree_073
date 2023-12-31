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
	Node (string i, Node* 1,Node* r)
	{
		info = i;
		leftchild = 1;
		rightchild = r;
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
		Node* newNode = new Node(element, NULL, NULL); // Allocate memory for the new node newNode->info = element; // Assign value to the data field of the new node newNode->left child = NULL; // Make the left child of the new node point to NULL newNode->rightchild = NULL; // Make the right child of the new node point to NULL
		newNode->info = element; // assign value to the data field of the new node
		newNode->leftchild = NULL; //make to the data field of the new node
		newNode->rightchild = NULL; // make the right child of the new node point to null

		Node* parent = NULL;
		Node* currentNode = NULL;
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
			parent->rightchild = newNode; //make the right child of the parent point to the new node
		}
	}


	void search(string element, Node*& parent, Node*& currentNode)
	{
		// this function search the currentNode of the specified Node as well as the current node of its parent
		currentNode = ROOT;
		parent = NULL;
		while ((currentNode != NULL) && (currentNode->info != element))
		{
			parent = currentNode;
			if (element < currentNode->info)
				currentNode = currentNode->leftchild;
			else
				currentNode = currentNode->rightchild;
		}
	}

	void inorder(Node* ptr)
	{
		if (ROOT == NULL)
		{
			cout << "tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			inorder(ptr->leftchild);
			cout << ptr->info << " ";
			inorder(ptr->rightchild);
		}
	}

	void preorder(Node* ptr)
	{
		if (ROOT == NULL)
		{
			cout << "tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			cout << ptr->info << " ";
			preorder(ptr->leftchild);
			preorder(ptr->rightchild);
		}
	}

	void preorder(Node* ptr)
	{
		//performs the postorder traversal of the tree
		if (ROOT == NULL)
		{
			cout << "tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			postorder(ptr->leftchild);
			postorder(ptr->rightchild);
			cout << ptr->info << " ";
		}
	}
};

int main()
{
	binary tree obj;
	while (true)
	{
		cout << "\nmenu" << endl;
		cout << "1. implement insert operation" << endl;
		cout << "2. perform inorder traversal" << endl;
		cout << "3. perform preorder traversal" << endl;
		cout << "4. perform postorder traversal" << endl;
		cout << "5. Exit" << endl;
		cout << "\nEnter your choice (1-5) : ";

		char ch;
		cin >> ch;
		cout << endl;

		switch (ch)
		{
		case '1':
		{
			cout << "enter a word: ";
			string word;
			cin >> word;
			obj.insert(word);
			break;
		}
		case '2':
		{
			obj.inorder(obj.ROOT);
			break;
		}
		case '3':
		{
			obj.preorder(obj.ROOT);
			break;
		}
		case '4':
		{
			obj.postorder(obj.ROOT);
			break;
		}
		case '5':
			return 0;
		default :
		{
			cout << "invalid option" << endl;
			break;
		}
		}
	}
}

	