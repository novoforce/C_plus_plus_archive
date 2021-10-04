#include <iostream>
#include <algorithm>
#include <vector>
#include "list.h"
using namespace std;

void print_linked_list(Node* head)
{
    cout << "\n The linked list:> " << endl;
    Node* temp = head;
    while(temp != NULL)
    {
        cout <<temp->data << "->";
        temp= temp->next;
    }
}

void reverse_linked_list(Node* &head)
{
    Node* current = head;
    Node* prev = NULL;
    Node* next;
    
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    
    
    // Node* C = head;
    // Node* P = NULL;
    // Node* N;
    
    // while(C!=NULL)
    // {
    //     N= C->next;
    //     C->next = P;
    //     P=C;
    //     C=N;
    // }
    // head = P;
    
}


int main()
{
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    //printing the LINKED LIST
    Node* head = l.begin(); // get the HEAD to get the START point
    print_linked_list(head);
    reverse_linked_list(head);
    print_linked_list(head);
    
    //Reversing the LINKED LIST
}