#include "Linkedlist.h"
#include <iostream>

using namespace std;

int main()
{
    Linkedlist List;
    List.Add(10);
    List.Add(20);
    List.Add(13);
    List.Add(50);
    List.Add(600);
    List.display();
    int i;
    cout<<"Number of Nodes is: "<<List.Count();
    cout<<"\nEnter index: ";
     cin>>i;
     List.getByIndex(i);
     List.reverseList();
    return 0;
}
