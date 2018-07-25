#include <iostream>
#include<stdio.h>
#include "listimp.h"
using namespace std;
ListDemo::ListDemo(): head(nullptr) {}
bool ListDemo::isEmpty(){return head == nullptr;}
    void ListDemo:: insert(int data){
        if(isEmpty()){
            list *node = new list(data,nullptr);
            head = node;
        }
        else{
            list * tmp = head;
            while(tmp->next != nullptr){
                tmp = tmp->next;
            }
            list *node = new list(data,nullptr);
            tmp->next = node;
        }
    }
    void ListDemo::delete_last(){
        list *tmp = head;
        if(tmp->next == nullptr)
        {
            cout<<tmp->value<<endl;
            delete tmp->next;
            
        }
        else
        {
            while(tmp->next->next != nullptr){
                tmp = tmp->next;
            }
            cout<<tmp->next->value<<endl;
            delete tmp->next;
            tmp->next = nullptr;
        }
    }
    
int main(){
    ListDemo *p = new ListDemo();
    //cout<<"*********Inserting 34 into the linked list*********"<<endl;
    //p->insert(34);
    //p->print();
    //cout<<"*******Inserting 45 into the linked list***********"<<endl;
    //p->insert(45);
    //p->delete_last();
    //p->print();
    bool go = true;
    int ins = 0;
    int count = 0;
    while(go)
    {
        cout<<"\nEnter a positive num to append to linked list or -1 to stop: ";
        cin>>ins;
        if(ins >= 0)
        {
            cout<<"*********Inserting "<<ins<<" into the linked list*********"<<endl;
            p->insert(ins);
            count++;
        }
        else
        {
            go = false;
        }
    }
    char ans;
    bool again = true;
    while(again && (count > 0))
    {
        cout<<"\nEnter 'p' to pop an element or 'q' to stop program ";
        cin>>ans;
        if(ans == 'p' && count > 0)
        {
            //cout<<"hi"<<endl;
            p->delete_last();
            //cout<<"hi2"<<endl;
            count--;
            
        }
        else
        {
            again = false;
        }
    }
    
    
    
    
    
    delete p;
    return 0;
}
