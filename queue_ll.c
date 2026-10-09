#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* front=NULL;
struct Node* rear=NULL;
void enqueue(int value){
    struct Node* newNode=malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("memory allocation faild");
        return;
    }
    newNode->data=value;
    newNode->next=NULL;
    if(front==NULL){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
    printf("%d inserted\n",value);
}
void display(){
    if(front == NULL){
        printf("queue is empty");
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

}