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

node* reverse(node* head){

    node* reverse_list_ka_head = NULL;
    node* previous = NULL;

    while (head != NULL){
        node* next = head->next;
        head->next = previous;
        previous = head;
        reverse_list_ka_head = head;
        head = next;
    }

    return reverse_list_ka_head;
}

void printing(node* head){

    node* temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main(){

    int n;
    cin >> n;
    node* head = Create(n);

    head = reverse(head);

    printing(head);

    return 0;
}