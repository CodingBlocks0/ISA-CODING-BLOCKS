#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};


/** Initialize your data structure here. */
int size = 0;
Node *head = NULL;
Node *tail = head;


/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int get(int index) {

    if (index < 0 or index >= size) {
        return -1;
    }

    Node *temp = head;
    int ith_index = 0;
    while (temp != NULL) {
        if (ith_index == index) {
            return temp->val;
        }
        temp = temp->next;
        ith_index++;
    }
    return -1;
}

/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
void addAtHead(int val) {
    // cout <<"addathead" << "\n";
    Node *curr = new Node(val);
    curr->next = head;
    head = curr;
    if (tail == NULL) {
        tail = head;
    }
    size++;
}

/** Append a node of value val to the last element of the linked list. */
void addAtTail(int val) {
    //code here
    Node *curr = new Node(val);
    if (tail != NULL){
        tail->next = curr;
    }
    tail = curr;
    if (head == NULL){
        head = curr;
    }
    size++;
}

/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void addAtIndex(int index, int val) {
    //code here
    if (index > size) return;

    if (index == 0) {
        addAtHead(val);
        return;
    }

    Node *temp = head;  // NULL
    int i = 0;


    while ((index - i) > 1) {
        temp = temp->next;
        i++;
    }


    Node *curr = new Node(val);
    curr->next = temp->next;
    temp->next = curr;


    if (curr->next == NULL) {
        tail = curr;
    }

    size++;
}

/** Delete the index-th node in the linked list, if the index is valid. */
void deleteAtIndex(int index) {
    // code here
    if (index < 0 or index >= size) {
        return;
    }

    if (size == 1) {
        head = NULL;
        tail = NULL;
        return;
    }

    if (index == 0) {
        head = head->next;
        size--;
        return;
    }

    Node *temp = head;
    int i = 0;

    while ((index - i) > 1) {
        temp = temp->next;
        i++;
    }

    temp->next = temp->next->next;
    if (index == size - 1) {
        tail = temp;
    }
    size--;
}

int main() {

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "addAtHead") {
            int data;
            cin >> data;
            addAtHead(data);
        } else if (s == "addAtTail") {
            int data;
            cin >> data;
            addAtTail(data);
        } else if (s == "addAtIndex") {
            int index, data;
            cin >> index;
            cin >> data;
            addAtIndex(index, data);
        } else if (s == "get") {
            int index;
            cin >> index;
            cout << get(index) << " ";
        } else {
            int index;
            cin >> index;
            deleteAtIndex(index);
        }
    }
    return 0;
}



/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

