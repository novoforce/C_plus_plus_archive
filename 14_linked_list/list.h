//linked list 
#include <iostream>
using namespace std;

/*
explanations on the deletion
In main.cpp there is "List l" defined statically which after the context of "main()" will get destroyed
For destroying it will call the destructor of List "~List()" which in turn will call "~Node()"

Now inside the "~Node()" it will execute "delete next" which is actually a recursive call to the next node
and finally delete the node starting from the END of the linked list.

*/
class Node
{
    //define the constructor
    public:
    int data;
    Node* next;
    Node(int d):data(d),next(NULL){}
    
    //getter function for return data for "cout"
    int getData()
    {
        return data;
    }
    
    ~Node()
    {
        if(next != NULL)
        {
            delete next; //recursive call
        }
        cout << " \n deleting data> "<<data << endl;
        
    }
    
    
    
    
    
    friend class List;
};


class List
{
    Node* head;
    Node* tail;
    //constructor
    public:
    List():head(NULL),tail(NULL){}
    
    //function for return the head of the list
    Node* begin()
    {
        return head;
    }
    
    //insert at the front
    void push_front(int data)
    {
        if(head == NULL) //if list is initially empty
        {
            Node* n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node* n = new Node(data);
            n->next = head;
            head = n;
        }
        
    }
    
    //insert at the back
    void push_back(int data)
    {
        if(head == NULL) //if list is initially empty
        {
            Node* n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node* n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
    
    //insert at the middle of the LL
    void insert(int data,int pos)
    {
        //adding at the front as pos==0
        if(pos == 0)
        {
            push_front(data);
            return;
        }
        else
        {
            Node* n = new Node(data);
            Node* temp= head;
            while(pos-1 > 0 ) //0 indexed so "pos-1"
            {
                temp = temp->next;
                pos--;
            }
            
            n->next = temp->next;
            temp->next = n;
        }
    }
    
    //deletion of the linked list using "Destructor" notice the "~" symbol
    ~List()
    {
        if(head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    
    //pop front
    void pop_front()
    {
        Node* temp = head;
        
        head = head->next;
        temp->next= NULL;
        delete temp;
    }
    
};