#include <iostream>
using namespace std;
class Node 
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) 
	{
        data = val;
        left = NULL;
        right = NULL;
    }
};
class BinaryTree 
{
public:
    Node* root;
    BinaryTree() 
	{
        root = NULL;
    }
    void preorder(Node* node) 
	{
        if (node == NULL) 
		return;
        cout << node->data << " ";    
        preorder(node->left);         
        preorder(node->right);        
    }

    void inorder(Node* node)
	{
        if (node == NULL) 
		return;
        inorder(node->left);           
        cout << node->data << " ";    
        inorder(node->right);        
    }

    void postorder(Node* node) 
	{
        if (node == NULL) 
		return;
        postorder(node->left);        
        postorder(node->right);         
        cout << node->data << " ";     
    }
    void displayPreorder() 
	{ 
		preorder(root); 
		cout << endl; 
	}
    void displayInorder() 
	{ 
		inorder(root);
		cout << endl; 
	}
    void displayPostorder() 
	{ 
		postorder(root);
		cout << endl; 
	}
};

int main() 
{
    BinaryTree tree;
    tree.root = new Node(1);
    tree.root->left = new Node(2);
    tree.root->right = new Node(3);
    tree.root->left->left = new Node(4);
    tree.root->left->right = new Node(5);

    cout<<"Pre-order: ";tree.displayPreorder();
    cout<<"In-order: ";tree.displayInorder();
    cout<<"Post-order: ";tree.displayPostorder();
    return 0;
}

