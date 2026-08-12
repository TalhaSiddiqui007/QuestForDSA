/*
Problem : Linked List Cycle
Platform: LeetCode
Difficulty: Easy

Approach:
- Two Pointer Approach

Topic:
- Linked List

Time Complexity : O(n)
Space Complexity : O(1)
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
    bool hasCycle(Node *head) {
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow-> next;
            fast = fast->next->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Solution obj;
    cout << obj.hasCycle(head);
    return 0;
}