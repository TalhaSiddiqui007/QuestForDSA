#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;

public:
    CircularList() {
        head = tail = NULL;
    }
    void insertAtHead(int val) { //O(1)
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insertAtTail(int val) { //O(1)
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead(){ //O(1)
        if(head == NULL){
            cout << "List is already Empty!";
            return;
        }else if(head == tail) { // for single Node
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            tail->next = temp->next;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void deleteAtTail(){ //O(n)
        if(head == NULL){
            cout << "List is already Empty!";
            return;
        }else if(head == tail) { // for single Node
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            prev->next = head;
            
            tail = prev;
            temp->next = NULL;
            delete temp;
        }
    }

    void printLL() { //O(n)
        if(head == NULL) return;

        cout << head->data << " -> ";
        Node* temp = head->next;

        while(temp != head){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
};

int main(){
    CircularList Cll;

    Cll.insertAtHead(3);
    Cll.insertAtHead(2);
    Cll.insertAtHead(1);

    Cll.printLL();

    Cll.insertAtTail(4);

    Cll.printLL();

    Cll.deleteAtHead();
    Cll.deleteAtTail();

    Cll.printLL();
}