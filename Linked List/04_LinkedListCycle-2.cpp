/*
Problem : Linked List Cycle II
Platform: LeetCode
Difficulty: Medium

Approach:
- Two Pointer Approach

Topic:
- Linked List, Cycle detection

Algorithm:
- Floyd's Cycle Detection

Time Complexity : O(n)
Space Complexity : O(1)
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
    Node* detectNode(Node* head){
        Node* slow = head;
        Node* fast = head;

        bool iSCycle = false;

        // Step 1 - detect cycle
        while(fast != NULL && fast->next != NULL){

            slow = slow-> next;
            fast = fast->next->next;

            if(fast == slow){
                iSCycle = true;
                break;
            }
        }

        // if No cycle found
        if(!iSCycle){
            return NULL;
        }

        // Step 2 - find starting node of the cycle
        slow = head;

        while(slow != fast){

            slow = slow->next;
            fast = fast->next;
        }
        
        // slow is the starting node of cycle
        Node* cycleStart = slow;

        // step 3 - find node just before cycleStart
        Node* prev = cycleStart;

        while(prev->next != cycleStart){
            prev = prev->next;
        }

        // step 4 - remove cycle
        prev->next = NULL;

        return cycleStart;
    }
};

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head->next->next->next = head->next->next;

    Solution obj;
    Node* result =  obj.detectNode(head);

    if(result != NULL){
        cout << "Cycle detected!\n";
        cout << "Cycle starts at node:" << result->data << endl;
    }else{
        cout << "No cycle detected." << endl;
    }

    // check that cycle was removed
    cout << "List after removing cycle: ";

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}