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

class Solution{
public:
    Node* removeElements(Node* head, int val){

        // delete first occurenece of Node
        while(head != NULL && head->data == val){
            Node* temp = head;
            head = head->next;
            delete temp;
        }

        // delete other occurenece of Node
        Node* temp = head;

        while(temp != NULL && temp->next != NULL){

            if(temp->next->data == val){
                Node* toDelete = temp->next;

                temp->next = temp->next->next;

                delete toDelete;
            }else{
                temp = temp->next;
            }
        }
    }

    void printLL(Node* head){ //O(n)
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data <<"->";
            temp = temp-> next;
        }
        cout << "NULL\n";
    }
};

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Solution obj;
    obj.printLL(head);

    obj.removeElements(head, 2);

    obj.printLL(head);
    
}