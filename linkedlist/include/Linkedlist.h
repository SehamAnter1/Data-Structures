#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>
static int counter=0;
using namespace std;
class Linkedlist
{
public:
    Linkedlist()
    {
        head =tail =0;
    }
    Node* head ;
    Node* tail;

    void  Add(int data)
    {
        Node* newNode = new Node(data);

        if(head==0)
            head = tail = newNode;
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        counter++;
    }

    void display()
    {
        Node* current=head;
        while(current!=0)
        {
            cout<<current->data<<"\n";
            current=current->next;
        }
    }
     int Count(){
      return counter;
    }

     void getByIndex(int index)
    {
        if(index<0||index>=counter){
            cout<<"this index is not exist\n";
            return;
        }
        int c=0;
        Node* current=head;
        while(current!=0)
        {

            if(index==c){
            cout<<"Value in Node "<< index <<" = " ;
            cout<<current->data;
            cout<<endl;
            }
            current=current->next;
            c++;
        }
    }

     void reverseList()
    {
        Node* current=tail;
        while(current!=0)
        {
            cout<<current->data<<"\n";
            current=current->prev;
        }
    }

};

#endif // LINKEDLIST_H
