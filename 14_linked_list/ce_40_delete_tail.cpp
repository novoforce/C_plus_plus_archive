#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

node* deleteTail(node * head){
    //Complete this function 
    node* temp = head;
    //finding the tail
    while(temp->next->next != NULL)
    {
        temp= temp->next;
    }
    delete(temp->next);
    temp->next = NULL;
    return head;
    
}

