#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }

};
/* Start Simple Linked list here
void insertAtHead(node* &head, int value)
{
    node* n = new node(value);

    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int value){

    node* n = new node(value);

    if(head == NULL){
    head = n;
    return;
    }

    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;   
}

bool searchList(node* head, int value)
{
    node* temp = head;

    while (temp != NULL)
    {
        if(temp->data == value)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool deleteList(node* &head, int value)
{
    node* temp = head;

    while(temp != NULL)
    {
        if(temp->data == value)
        {
            temp->data = -1;
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void displayList(node* head){
    
    node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    displayList(head);
    cout << searchList(head, 5) <<endl;
    insertAtHead(head, 4);
    displayList(head);
    deleteList(head, 4);
    cout << searchList(head, 4) << endl; 
    displayList(head);
    return 0;
}

End simple linked lise here */

/* Start Simple Stack With The Help Of Linked List

void insertAtHead(node* &head, int value){

    node* n = new node(value);
    n->next = head;
    head = n;
}

void displayStack(node* head){

    node* n = head;

    node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}

void deleteStack(node* &head){

    node* temp = head;

    head = head->next;


}

bool searchStack(node* head, int value){
    
    node* temp = head;

    while (temp != NULL)
    {
        if(temp->data == value){
            return true;
        }
        temp = temp->next;
    }

    return false;

}

int main()
{
    node* head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    displayStack(head);
    insertAtHead(head, 10);
    displayStack(head);
    deleteStack(head);
    displayStack(head);
    cout << searchStack(head, 23) << endl;
    cout << searchStack(head, 4) << endl;
    deleteStack(head);
    displayStack(head); // 1 = true , 0 = false
    return 0;
}

End Simple Stack With The Help Of Linked List */

/* Start Simple Queue With The Help of Linked List 

void insertAtBack(node* &head, int value){

    node* n = new node(value);

    if(head == NULL)
    {
        head = n;
        return ;
    }

    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;

}

void deleteFromFront(node* &head){

    if(head == NULL)
    {
        return;
    }
    node* temp = head;
    head = temp->next;
    
}

void displayQueue(node* head){
    
    if(head == NULL){
        cout<<"Empty Queue"<<endl;
        return;
    }

    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool searchInQueue(node* head, int value){

    if(head == NULL){
        cout << "Empty Queue, So search operation is not perform" << endl;
    }
    
    node* temp = head;
    while (temp != NULL)
    {
        if(temp->data == value){
            return true;
        }

        temp = temp->next;
    }

    return false;
}

int main()
{
    node* head = NULL;
    insertAtBack(head, 1);
    insertAtBack(head, 2);
    insertAtBack(head, 3);
    displayQueue(head);
    deleteFromFront(head);
    displayQueue(head);
    deleteFromFront(head);
    displayQueue(head);
    deleteFromFront(head);
    displayQueue(head);
    insertAtBack(head,4);
    displayQueue(head);
    insertAtBack(head, 5);
    displayQueue(head);
    deleteFromFront(head);
    displayQueue(head);
    cout << searchInQueue(head, 5) << endl;
    cout << searchInQueue(head, 4) << endl;
    insertAtBack(head, 10);
    displayQueue(head);

}

End Simple Queue With The Help Of Linked List */