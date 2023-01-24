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

node* oddeven(node* head){

    node* odd_head = head;
    node* even_head = head->next;

    node* odd_tail = head;
    node* even_tail = head->next;

    while (even_tail != NULL){

        odd_tail->next = even_tail->next;

        if (odd_tail->next != NULL){
            odd_tail = odd_tail->next;
        }

        even_tail->next = odd_tail->next;
        even_tail = even_tail->next;
    }

    odd_tail->next = even_head;
    return odd_head;
}

int main(){

    int n;
    cin >> n;
    node* head = Create(n);

    head = oddeven(head);
    printing(head);

}