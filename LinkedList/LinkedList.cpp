#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    // constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

int main(){

//    node*head = new node(5);
//    head->next = new node(6);
//    head->next->next = new node(7);
//
//    node* temp = head->next;
//
////    while (temp != NULL){
////        cout << temp->data << endl;
////        temp = temp->next;
////    }
////    cout << head->data << endl;


     int n;
     cin >> n;

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

     node* temp = head;

     while (temp != NULL){
             cout << temp->data << endl;
             temp = temp->next;
     }

    return 0;
}