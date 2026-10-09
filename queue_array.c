#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1;
int rear=-1;
void enqueue(int value){
    if(rear==SIZE-1){
        printf("Queue Overflow!\n");
        return;
    }
    if(front == -1){
        front=0;
    }
    rear++;
    queue[rear]=value;
    printf("%d inserted\n",value);
}
void dequeue(){
    if(front ==-1 || front>rear){
        printf("queue underflow!\n");
        return;
    }
    printf("%d deleted\n",queue[front]);
    front++;
    if(front> rear){
        front=rear=-1;
    }
}
void display(){
    if(front==-1){
        printf("queue is empty\n");
        return;
    }
    for(int i=front; i<=rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    
    enqueue(30);
    display();
    dequeue();
    display();


}