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
int main(){
    Node* head = new Node{10, NULL};
    head->next= new Node{20, NULL};
    head->next->next= new Node{30, NULL};
    head->next->next->next= new Node{40,NULL};
    printLinkedList(head);
    return 0;
}