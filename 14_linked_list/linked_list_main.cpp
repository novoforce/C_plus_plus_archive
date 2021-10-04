#include <iostream>
#include <algorithm>
#include <vector>
#include "list.h"
using namespace std;

//iterative searching
bool search(Node* head, int key)
{
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp= temp->next;
    }
    return false; 
}

bool search_recursive(Node* head, int key)
{
    //if there is no Linked list
    if(head == NULL)
    {
        return false;
    }
    if(head->data == key) //if key is FOUND
    {
        return true;
    }
    else
    {
        return search_recursive(head->next,key);
    }
    
}

int main()
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(2);
    l.insert(8,2);
    l.insert(100,0);
    l.pop_front();
    
    Node* head= l.begin();
    Node* temp = head;
    cout << "\n The Linked List> \n";
    while(temp != NULL)
    {
        cout << temp->getData()<<"->";
        temp= temp->next;
    }
    
    
    
    if(search_recursive(head,88))
    {
        cout << "\n" << "element found";
    }
    else
    {
        cout <<"\n" <<"element not found";
    }
}