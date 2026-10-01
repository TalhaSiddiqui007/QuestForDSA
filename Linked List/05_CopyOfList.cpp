/*
Problem : Copy of List
Platform: None
Difficulty: Easy

Approach:
- Iterative traversal + Node creation

Topic:
- Deep Copy / Cloning a Singly Linked List

Time Complexity : O(n)
Space Complexity : O(1) auxiliary space, O(n) output space.
*/

#include <iostream>
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
class Solution{
public:
    Node* copyList(Node* head){
        Node* newHead = new Node(head->data);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;
        while(oldTemp != NULL){
            Node*  copyNode = new Node(oldTemp->data);
            newTemp->next = copyNode;
            oldTemp= oldTemp->next;
            newTemp = newTemp->next;
        }
        return newHead;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    printLL(head);
    cout << endl;

    Solution obj;
    Node* newHead = obj.copyList(head);
    printLL(newHead);
}