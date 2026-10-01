/*
Problem : Merge Two Linked List
Platform: LeetCode
Difficulty: Easy

Approach:
- 

Topic:
- Linked List, Merge

Time Complexity :
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

class Solution {
public:
    Node* mergeTwoLists(Node* head1, Node* head2) {
        if(head1 == NULL || head2 == NULL){
            return head1 == NULL ? head2 : head1;
        }
        if(head1->data <= head2->data){
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        }else{
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
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
    //1st LL
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);

    //2nd ll
    Node* head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = new Node(6);

    printLL(head1);
    cout << endl;

    printLL(head2);
    cout << endl;

    Solution obj;
    Node* mergerHead = obj.mergeTwoLists(head1, head2);

    printLL(mergerHead);
}