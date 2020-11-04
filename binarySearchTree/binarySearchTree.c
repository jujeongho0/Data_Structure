#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef char element;

typedef struct treeNode {
	char key;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;

treeNode* searchBST(treeNode* root, char x) {
	treeNode* p;
	p = root;
	while (p != NULL) {
		if (x < p->key) p = p->left;
		else if (x == p->key) return p;
		else p = p->right;
	}
	printf("\n Cannot find a key!");
	return p;
}

treeNode* insertNode(treeNode* p, char x) {
	treeNode* newNode;
	if (p == NULL) {
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->key = x;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}
	else if (x < p->key) p->left = insertNode(p->left, x);
	else if (x > p->key) p->right = insertNode(p->right, x);
	else printf("\n duplicated! \n");

	return p;
}

void deleteNode(treeNode* root, element key) {
	treeNode* parent, * p, * pred, * pred_parent;
	treeNode* child;
	parent = NULL;
	p = root;
	while ((p != NULL) && (p->key != key)) {
		parent = p;
		if (key < p->key) p = p->left;
		else p = p->right;
	}

	if (p == NULL) {
		printf("\n Cannot find a key in the tree!");
		return;
	}
	if ((p->left == NULL) && (p->right == NULL)) {
		if (parent != NULL) {
			if (parent->left == p) parent->left = NULL;
			else parent->right = NULL;
		}
		else root = NULL;
	}
	else if ((p->left == NULL) || (p->right == NULL)) {
		if (p->left != NULL) child = p->left;
		else child = p->right;

		if (parent != NULL) {
			if (parent->left == p) parent->left = child;
			else parent->right = child;
		}
		else root = child;
	}
	else {
		pred_parent = p;
		pred = p->left;

		while (pred->right != NULL) {
			pred_parent = pred;
			pred = pred->right;
		}
		if (pred_parent->left == pred) pred_parent->left = pred->left;
		else pred_parent->right = pred->left;

		p->key = pred->key;
		p = pred;
	}


	free(p);
}

void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("%c", root->key);
		displayInorder(root->right);
	}
}

char scan() {
	char key;
	scanf("%c", &key);
	return key;
}


void menu() {
	printf("\n*-----------------*");
	printf("\n\t1 : Print Tree");
	printf("\n\t2 : Insert a node");
	printf("\n\t3 : Delete a node");
	printf("\n\t4 : Search a node");
	printf("\n\t5 : Exit");
	printf("\n*-----------------*");
	printf("\nChoose an option >> ");
}

int main() {
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char key[2];
	int choice;

	root = insertNode(root, 'G');
	insertNode(root, 'I');
	insertNode(root, 'H');
	insertNode(root, 'D'); 
	insertNode(root, 'B'); 
	insertNode(root, 'M');
	insertNode(root, 'N');
	insertNode(root, 'A');
	insertNode(root, 'J');
	insertNode(root, 'E');
	insertNode(root, 'Q');
	
	while (1) {
		menu();
		scanf("%d", &choice);

		switch (choice ) {
		case 1:printf("\t[Print out binary tree]");
			displayInorder(root); printf("\n");
			break;

		case 2:printf("Type a node to be inserted:");
			scanf("%s", key);
			insertNode(root, key[0]);
			break;

		case 3:printf("Type a node to be deleted:");
			scanf("%s", key);
			deleteNode(root, key[0]);
			break;

		case 4:printf("Type a node to be searched:");
			scanf("%s", key);
			foundedNode = searchBST(root, key[0]);
			if (foundedNode != NULL)
				printf("\n Found %c!\n", foundedNode->key);
			else printf("\n Cannot find a char.\n");
			break;

		case 5:return 0;

		default:printf("Try again\n");
			break;
		}
	}
}