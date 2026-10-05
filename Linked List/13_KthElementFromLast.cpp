/*
Problem : kth element from last
Platform: GeeksforGeeks
Difficulty: Easy

Approach:
- Searching

Topic:
- Linked List

Time Complexity : O(n)
space Complexity : O(1)
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

void push_back(Node*& head, int val){
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

class Solution {
public:
    int getKthFromLast(Node* head, int k){
        int len = 1;
        Node* temp = head;
        while(temp->next != NULL){
            len++;
            temp = temp->next;
        }
        if(k == 1){
            return temp->data;
        }else if(k > len){
            return -1;
        }else{
            temp = head;
            int pos = 0;
            while(temp != NULL){
                if(pos == len - k){
                    break;
                }
                temp = temp->next;
                pos++;
            }
            return temp->data;
        }
    }
};

int main(){
    Node* head = NULL;
    push_back(head, 1);
    push_back(head, 2);
    push_back(head, 3);
    push_back(head, 4);
    push_back(head, 5);
    push_back(head, 6);
    push_back(head, 7);
    push_back(head, 8);
    push_back(head, 9);

    Solution obj;

    cout << obj.getKthFromLast(head, 3);
}