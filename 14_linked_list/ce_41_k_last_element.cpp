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

void k_last_element(Node* head, int k)
{
    //initialize 2 pointers to the head;
    Node* main = head;
    Node* temp = head;
    
    //take the "temp" pointer to the k positions
    while(k > 1)
    {
        temp= temp->next;
        k--;
    }
    
    while(temp->next != NULL)
    {
        temp= temp->next;
        main= main->next;
    }
    cout << "\n the k last element is :> " << main->data;
    
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
    int k= 3;
    k_last_element(head,k);
}