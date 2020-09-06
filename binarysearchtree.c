#include <stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnodemade(int data)
{
	struct node* temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->right=NULL;
	temp->left=NULL;
}
struct node* insert(struct node* root,int data)
{
	if(root==NULL)
	{
		root=newnodemade(data);
		return root;

	}
	else if(data<=root->data)
	{
		root->left=insert(root->left,data);
	}
	else 
	{
		
		root->right=insert(root->right,data);
	}

	return root;
}
int main()
{
	struct node* root=NULL;
	//root=insert(root,data);
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);

}