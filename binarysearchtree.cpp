#include<iostream>
using namespace std;
//Definition of Node for Binary search tree
struct BstNode 
{
	int data; 
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data)
{
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	} 
	return root;
}
BstNode* FindMin(BstNode* root)
{
	while(root->left != NULL)
	{
		root = root->left;
	}
	return root;
}

// Function to search a delete a value from tree.
struct BstNode* Delete(struct BstNode *root, int data) {
	if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			struct BstNode *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct BstNode *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			struct BstNode *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main()
 {
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	while(1)
	{
		int number,ch,n,d;
		cout<<"enter the choice:\n";
		cout<<"1.Insert\n";
		cout<<"2.Delete\n";
		cout<<"3.Search\n";
		cout<<"4.Exit:\n";
	    cin>>ch;
       switch(ch)
       {
       	case 1:
       	{
       		cout<<"enter number to insert:";
       		cin>>n;
       		root = Insert(root,n);
       		break;

       	}
       	case 2:
       	{
       		cout<<"enter number to delete:";
       		cin>>d;
       		root = Delete(root,d);
       		cout<<"deleted from tree";
       		break;
       	}
       	case 3:
       	{
           cout<<"Enter number be searched\n";
	        cin>>number;
	       if(Search(root,number)==true)
	        {
		       cout<<"found";

	        }
	      else
	      {
		   cout<<"not found";
          }
            break;

       	}
       	case 4:
       	{
       		return 0;
       		break;
       	}
       	default:
       	{
       	    	cout<<"wrong choice";
       	    	break;
       	}
       }
   }

	return 0;
}