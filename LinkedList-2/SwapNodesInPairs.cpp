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

node* SwapsNodes(node* head){

    // base cases
    if (head == NULL or head->next == NULL){
        return head;
    }
    //
   node* new_head  = SwapsNodes(head->next->next);

   node*first = head;

   node*second = head->next;

   second->next = first;

   first->next = new_head;

   return second;
}



int main(){

    int n;
    cin >> n;
    node* head = Create(n);

    head = SwapsNodes(head);
    printing(head);
}