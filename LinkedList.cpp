#include<iostream>
using namespace std;



class Node {
    public : 
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val);
void insertAtHead(Node* &head, int val);
void display(Node* head);
void deleteNode(Node* &head, int val);
Node* deleteHead(Node* &head);

int main() {
    
    Node* n = new Node(1);
    insertAtTail(n, 2);
    insertAtTail(n, 3);
    insertAtTail(n, 4);
    insertAtTail(n, 5);
    insertAtTail(n, 6);
    insertAtTail(n, 7);
    insertAtTail(n, 8);
    insertAtTail(n, 9);
    insertAtTail(n, 10);
    
    display(n);

    deleteNode(n, 1);
    display(n);

    return 0;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteHead(Node* &head) {
    Node* temp = head;
    head = head->next; delete(temp); 
    return head;
}

void deleteNode(Node* &head, int val) {
    Node* temp = head;
    if(head->val == val) {
        head = deleteHead(head);
        return;
    }

    while(temp->next != NULL) {
        if(temp->next->val == val) 
            break;
        temp = temp->next;
    }

    Node* to_delete = temp->next;
    temp->next = temp->next->next;
    delete(to_delete);

}

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL) {
        head = n;
        return;
    }

    n->next = head;
    head = n;
    return;

}

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);
    if(head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) 
        temp = temp->next;
    
    temp->next = n;
    return;

}