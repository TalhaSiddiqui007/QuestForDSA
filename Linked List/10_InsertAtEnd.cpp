/*
Problem : Linked List End Insertion
Platform: GeeksforGeeks
Difficulty: Basic

Approach:
- insertion

Topic:
- Linked List

Time Complexity : O(n)
space Complexity : O(1)
*/

#include <iostream>
#include <vector>
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

class List{
    Node* head;

public:
    List(){
        head = NULL;
    }
    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
        }else{
            Node* temp = head;

            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    
};

int main(){
    List ll;
    
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    ll.insertAtEnd(4);

    ll.printLL();
}