#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode {
	char data;
	struct treeNode* left;
	struct treeNode* right;

}treeNode;

treeNode* makeNode(char data, treeNode* leftNode, treeNode* rightNode) { 
	treeNode* root = (treeNode*)malloc(sizeof(treeNode)); 
	root->data = data; 
	root->left = leftNode; 
	root->right = rightNode;  
	return root;
}

void preorder(treeNode* root) { 
	if(root != NULL) { 
		printf("[%c] ", root->data);  
		preorder(root->left); 
		preorder(root->right); 
	} 
}

void inorder(treeNode* root) { 
	if(root != NULL) { 
		inorder(root->left); 
		printf("[%c] ", root->data); 
		inorder(root->right); 
	}
}

void postorder(treeNode* root) { 
	if(root != NULL) {
		postorder(root->left); 
		postorder(root->right); 
		printf("[%c] ", root->data);
	} 
}

int main() {
	treeNode* n7 = makeNode('D', NULL, NULL);
	treeNode* n6 = makeNode('C', NULL, NULL);
	treeNode* n5 = makeNode('B', NULL, NULL);
	treeNode* n4 = makeNode('A', NULL, NULL);
	treeNode* n3 = makeNode('/', n6, n7);
	treeNode* n2 = makeNode('*', n4, n5);
	treeNode* n1 = makeNode('-', n2, n3);

	printf("Preorder : ");
	preorder(n1);
	printf("\n");

	printf("inorder : ");
	inorder(n1);
	printf("\n");

	printf("postorder : ");
	postorder(n1);
	printf("\n");

	getchar();
	return 0;


}