/*
Problem : Search Key in Linked Lidt
Platform: GeeksforGeeks
Difficulty: Basic

Approach:
- Searching

Topic:
- Linked List

Time Complexity : O(n)
space Complexity : O(1)
*/

#include<bits/stdc++.h>
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
    bool searchKey(Node* head, int val){
        Node* temp = head;
        while(temp != NULL){
            if(temp->data == val){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

void insertAtEnd(Node* head, int val){
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

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main(){
    Node* head = new Node(0);
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);

    Solution obj;
    bool result = obj.searchKey(head, 9);

    if(result){
        cout << "Key is present in the list" << endl;
    }else{
        cout << "Key is not present in the list" << endl;
    }
}