#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

node* Create(int n){

    node* head = NULL;
    node* last = NULL;

    for (int i = 1 ; i <= n ; i++){
        int x;
        cin >> x;
        node*temp = new node(x);
        if (head == NULL and last == NULL){
            head = temp;
            last = temp;
        }
        else {
            last->next = temp;
            last = temp;
        }
    }
    return head;
}

void printing(node* head){

    node* temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

node* RemoveKthNodeFromEnd(node* head , int k){

    node* first , *second , *third;

    first = NULL;
    second = head;

    third = head;
    while (k > 0){
        third = third->next;
        k--;
    }

    if (third == NULL){
        // kya delete karna head
        first = second->next;
        second->next = NULL;
        return first;
    }
    else {
        while (third != nullptr){
            first = second;
            second = second->next;
            third = third->next;
        }

        first->next = second->next;
        second->next = NULL;
        return head;
    }
}


int main(){

    int n;
    cin >> n;
    node* head = Create(n);

    int Kth;
    cin >> Kth;
    head = RemoveKthNodeFromEnd(head , Kth);
    printing(head);
}