#include<stdio.h>
#include<stdlib.h>

typedef struct avl {
	int value;
	int	depth;
	struct avl* left;
	struct avl* right;
}AVL;

inline int depth(AVL* left, AVL* right) {
	if (left == NULL && right == NULL)
	{
		return 1;
	}
	else if (left == NULL)
	{
		return right->depth + 1;
	}
	else if (right == NULL)
	{
		return left->depth + 1;
	}
	else
	{
		return max(left->depth, right->depth) + 1;
	}
}

inline AVL* create(AVL* new, int number) {
	new = (AVL*)malloc(sizeof(AVL));
	new->value = number;
	new->right = NULL;
	new->left = NULL;
	new->depth = depth(new->left, new->right);
	return new;
}

inline int isBalanced(AVL* left, AVL* right) {
	if (left == NULL && right == NULL)
	{
		return 0;
	}
	else if (left == NULL)
	{
		return -right->depth;
	}
	else if (right == NULL)
	{
		return left->depth;
	}
	else
	{
		return left->depth - right->depth;
	}
}

inline AVL* rrBalance(AVL* node){
	AVL* newRoot = node->right;
	node->right = newRoot->left;
	node->depth = depth(node->left, node->right);
	newRoot->left = node;
	
	return newRoot;
}

inline AVL* rlBalance(AVL* node) {
	AVL* temp = node->right;
	AVL* newRoot = temp->left;

	node->right = newRoot->left;
	node->depth = depth(node->left, node->right);
	temp->left = newRoot->right;
	temp->depth = depth(temp->left, temp->right);
	newRoot->left = node;
	newRoot->right = temp;
	newRoot->depth = depth(newRoot->left, newRoot->right);

	return newRoot;
}

inline AVL* lrBalance(AVL* node) {
	AVL* temp = node->left;
	AVL* newRoot = temp->right;

	node->left = newRoot->right;
	node->depth = depth(node->left, node->right);
	temp->right = newRoot->left;
	temp->depth = depth(temp->left, temp->right);
	newRoot->left = temp;
	newRoot->right = node;
	newRoot->depth = depth(newRoot->left, newRoot->right);
	 
	return newRoot;
}

inline AVL* llBalance(AVL* node) {
	AVL* newRoot = node->left;
	node->left = newRoot->right;
	node->depth = depth(node->left, node->right);
	newRoot->right = node;

	return newRoot;
}



inline AVL* insertAVL(AVL* root, int number){
	if (root == NULL)
	{
		root = create(root, number);
		return root;
	}
	else
	{
		if (root->value < number)
		{
			root->right = insertAVL(root->right, number);
			root->depth = depth(root->left, root->right);
		}
		else if (root->value > number)
		{
			root->left = insertAVL(root->left, number);
			root->depth = depth(root->left, root->right);
		}
		else
		{
			return;
		}

		if (isBalanced(root->left, root->right) < -1)
		{
			if (number > root->right->value)
			{
				root = rrBalance(root);
			}
			else
			{
				root = rlBalance(root);
			}
		}
		else if (isBalanced(root->left, root->right) > 1)
		{
			if (number > root->left->value)
			{
				root = lrBalance(root);
			}
			else
			{
				root = llBalance(root);
			}
		}

		return root;
	}
}

inline AVL* searchAVL(AVL* root, int number) {
	while (root != NULL && root->value != number)
	{
		if (number < root->value)
		{
			root = root->left;
		}
		else if (number > root->value)
		{
			root = root->right;
		}
	}

	return root;
}