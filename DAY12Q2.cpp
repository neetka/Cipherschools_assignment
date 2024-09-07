#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void printLinkedList(Node* head){
    Node* current = head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current = current->next;
    }
}
void insertAtEnd(Node*& head, int data){
    Node* newNode = new Node{data, NULL};
    if(head == NULL){
        head = newNode;
    }else{
        Node* current = head;
        while(current->next !=NULL){
            current= current->next;
        }
        current->next = newNode;
    }
}
int main(){
    Node* head = new Node{10, NULL};
    head->next= new Node{20, NULL};
    head->next->next= new Node{30, NULL};
    insertAtEnd(head, 40);
    printLinkedList(head);
    return 0;
}