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

//    last->next = head->next->next; (Cycle ke liye)

    return head;
}

void printLinkedList(node* head){

    node* temp = head;

    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

}

node* insertAtFront(node* head){

   int val;
   cin >> val;

   node* temp = new node(val);
   temp->next = head;

   return temp;
}

node* InsertAtEnd(node* head){
    int val;
    cin >> val;

    node* temp = new node(val);

    node* last = head;

    while (last->next != NULL){
        last = last->next;
    }

    last->next = temp;
    return head;
}

node* DeleteLastNode(node* head){

    if (head->next == NULL){
        return NULL;
    }

    node* last = head;

    while (last->next->next != NULL){
        last = last->next;
    }

    last->next = NULL;
    return head;
}

int Middle(node* head){

    node* slow = head;
    node* fast = head;

    // node* fast = head->next;

    while ( fast != NULL and fast->next != NULL  ){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

bool cycle_exist(node* head){

    node* fast = head->next;
    node* slow = head;

    while (fast != NULL and fast->next !=  NULL){
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow){
           return true;
        }
    }
    // cycle nahi hai
    return false;
}

node* mergeIterative(node* head1 , node* head2){

    node* dummy_head = new node(100);
    node*ptr = dummy_head;

    node* l1 = head1;
    node* l2 = head2;

    while (l1 != NULL and l2 != NULL){

        if (l1->data < l2->data){
            ptr->next = l1;
            l1 = l1->next;
        }

        else {
            ptr->next = l2;
            l2 = l2->next;
        }

        ptr = ptr->next;
    }


    if (l1 != NULL){
        ptr->next = l1;
    }
    if (l2 != NULL){
        ptr->next = l2;
    }

    return dummy_head->next;
}


node* mergerRecursive(node* head1 , node* head2){
    // base case
    if (head1 == NULL){
        return head2;
    }
    if (head2 == NULL){
        return head1;
    }

    // recursive
    if (head1->data < head2->data){
        head1->next = mergerRecursive(head1->next , head2);
        return head1;
    }
    else {
        head2->next = mergerRecursive(head1 , head2->next);
        return head2;
    }
}



int main(){

    int n;
    cin >> n;

    node* head1 = Create(n);

    int m;
    cin >> m;
    node* head2 = Create(m);

  //  node* head = mergeIterative(head1 , head2);
  //   node* head = mergerRecursive(head1 , head2);
  //  printLinkedList(head);
 //   cout << "Before : ";
//    printLinkedList(head);
//    cout << endl;
//
//    head = insertAtFront(head);
//    head =InsertAtEnd(head);
//    head = DeleteLastNode(head);
//
//    cout << "After : ";
//    printLinkedList(head);
//
//    cout << endl;

 //   cout << "Middle of Linked list is " << Middle(head);

 //cout << cycle_exist(head) << endl;

    return 0;
}