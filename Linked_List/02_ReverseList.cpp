/*
Problem : Reverse Linked List
Platform: LeetCode
Difficulty: Easy

Approach:
- Three Pointer Approach

Topic:
- Linked List

Time Complexity : O(n)
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
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void reverseList(){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.display();

    ll.reverseList();

    ll.display();
}