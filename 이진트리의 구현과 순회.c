#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
typedef struct TNode{
   struct TNode* leftNode;
   struct TNode* rightNode;
   int data;
} TNode;

TNode* makeRootNode(char data, TNode* leftNode, TNode* rightNode){
   TNode* root = (TNode*)malloc(sizeof(TNode));//트리 노드 동적할당 
   root->data = data;//데이터
   root->leftNode = leftNode;//왼쪽노드 주소값
   root->rightNode = rightNode;//오른쪽 주소값
   return root;//생성된 노드의 주소
}

void preorder(TNode* root){
   if(root != NULL){
      printf("[%d] ", root->data);
      preorder(root->leftNode);
      preorder(root->rightNode);
   }
}

void inorder(TNode* root){
   if(root != NULL){
      inorder(root->leftNode);
      printf("[%d] ", root->data);
      inorder(root->rightNode);
   }
}

void postorder(TNode* root){
   if(root != NULL){
      postorder(root->leftNode);
      postorder(root->rightNode);
      printf("[%d] ", root->data);
   }
}

void main(){
   TNode* n1 = makeRootNode(1, NULL, NULL);
   TNode* n2 = makeRootNode(4, n1, NULL);
   TNode* n3 = makeRootNode(16, NULL, NULL);
   TNode* n4 = makeRootNode(25, NULL, NULL);
   TNode* n5 = makeRootNode(20, n3, n4);
   TNode* n6 = makeRootNode(15, n2, n5);
   TNode* root = n6;
   
   printf("중위 순회=");
   inorder(root);
   printf("\n");
   printf("전위 순회=");
   preorder(root);
   printf("\n");
   printf("후위 순회=");
   postorder(root);
   printf("\n");

   //동적할당 해제 함수 호출
   free(n1);free(n2);free(n3);
   free(n4);free(n5);free(n6);
   
   return 0;
}
