#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef  struct Node {
    int val;
    struct Node* next;
}Node;

Node* insertAtBegining(struct Node *head, int val){
    Node* nn = (Node*)malloc(sizeof(Node));
    nn->val = val;
    nn->next =head;
    return nn;
}
void print(Node *head){
    if(head){
        printf("%d",head->val);
    }
    if(head->next){
            printf("->");
            print(head->next);
    }
}
int main() {
    int length;
    scanf("%d",&length);
    Node * head=NULL;
    for(int i=0;i<length;i++){
        int val;
        scanf("%d",&val);
        head=insertAtBegining(head,val);
    }
    print(head);
    return 0;
}
