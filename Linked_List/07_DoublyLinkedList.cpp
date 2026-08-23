#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;
public:
    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val){ //O(1)
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){ // O(1)
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){ // O(1)

        if(head == NULL){
            cout << "List is Empty!" << endl;
        }else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(){ // O(1)

        if(head == NULL){
            cout << "List is Empty!" << endl;
        }else{
            Node* temp = tail;
            tail = tail->prev;
            if(tail != NULL){
                tail->next = NULL;
            }
            temp->prev = NULL;
            delete temp;
            
        }
    }

    void printLL(){ // O(n)
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    DoublyList Dll;
    Dll.push_front(1);
    Dll.push_front(2);
    Dll.push_front(3);

    Dll.push_back(4);
    Dll.push_back(5);

    Dll.printLL();

    Dll.pop_front();
    Dll.pop_back();

    Dll.printLL();

}