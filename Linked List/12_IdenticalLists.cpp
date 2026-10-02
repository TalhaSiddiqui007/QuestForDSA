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

class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        Node* temp = head1;
        Node* temp1 = head2;
        
        while(temp != NULL && temp1 != NULL){
            if(temp->data != temp1->data){
                return false;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
        return temp == NULL && temp1 == NULL;
        
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

int main(){
    Node* head1 = new Node(1);
    Node* head2 = new Node(1);

    insertAtEnd(head1, 2);
    insertAtEnd(head1, 3);
    insertAtEnd(head1, 4);

    insertAtEnd(head2, 2);
    insertAtEnd(head2, 3);
    insertAtEnd(head2, 4);

    Solution obj;
    int result = obj.areIdentical(head1, head2);

    if(result){
        cout << "Both lists are identical";
    }else{
        cout << "Both lists are different";
    }
}