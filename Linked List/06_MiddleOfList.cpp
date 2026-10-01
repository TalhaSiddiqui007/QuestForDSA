/*
Problem : Middle of Linked List
Platform: LeetCode
Difficulty: Easy

Approach:
- Two Pointer Approach / slow & fast Pointer

Topic:
- Linked List

Time Complexity : O(n)
Space Complexity : O(1)
*/

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
    Node* middleOfList(Node* head){
        int length = 0;

        Node* temp = head;
        Node* fast = head;
        Node* slow = head;

        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        
        if(length % 2 == 0){
            while(fast != NULL){
                fast = fast->next->next;
                slow = slow->next;
            }
        }else{
            while(fast->next != NULL){
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        return slow;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
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
    Node* result = obj.middleOfList(head);

}