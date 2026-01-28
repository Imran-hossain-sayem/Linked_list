#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
int val;
Node *next;
Node(int val)
{
    this->val=val;
    this->next=NULL;
}
};
void insert(Node *&head,int v)
{
    Node *newNode= new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print(Node *head)
{
    
    Node *tmp=head;
    cout<<"linked list: ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;

    }
    cout<<endl;
}
int main()
{
    Node *head=new Node(100);
    Node *a=new Node(200);
    head->next=a;

    while(true)

    {
        cout<<"option 1 insert"<<endl;
        cout<<"option 2 print linked list"<<endl;
        cout<<"option 3 terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            int val;
            cin>>val;
          insert(head,val);
        }
        else if(op==2)
        {
          print(head);
        }
        else if(op==3)
        {
            break;
        }
    }
    return 0;
}