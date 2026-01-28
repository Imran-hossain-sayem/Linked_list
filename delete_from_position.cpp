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
void insert_at_tail(Node *&head,int val)
{
    Node *newNode=new Node(val);
    Node *tmp=head;
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<"inserted at tail"<<endl;
}
void print(Node *head)
{
  Node *tmp=head;
  cout<<" Your linked list:";
  while(tmp!=NULL)
  {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
  }
  cout<<endl<<endl;

} 
void insert_at_postion(Node *head,int pos,int val)
{
    Node *newNode= new Node(val);
    Node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<"inserted "<<endl;
}
void insert_at_head(Node *&head,int val)
{
    Node *newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<"inserted at head "<<endl;
}
void delete_from_position(Node *head,int pos)
{
    Node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
     tmp=tmp->next;
    }
    Node *deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    cout<<"deleted"<<endl;
}
int main()
{
      Node *head=NULL;
      while(true)
      {
      cout<<"option 1 :insert at tail:"<<endl;
      cout<<"option 2 :insert at any position:"<<endl;
      cout<<"option 3 :print linked list:"<<endl;
      
      cout<<"Option 4:insert at head"<<endl;
      cout<<"option 5 :delete from  postion"<<endl;

      cout<<"option 6 :terminate"<<endl;
      int op;
      cin>>op;
      if(op==1)
      {
        cout<<"enter value:";
       int v;
       cin>>v;
       insert_at_tail(head,v);
      }
     else if(op==2)
     {
       int x,pos;
       cout<<"enter postion:";
       cin>>pos;
       cout<<"enter value:";
       cin>>x;
       if(pos==0)
       {
        insert_at_head(head,x);
       }
       else
       {
       insert_at_postion(head,pos,x);
       }
     }
     else if(op==3)
     {
       print(head);
     }
     else if(op==4)
     {
       int x;
       cout<<"enter value:";
       cin>>x;
      insert_at_head(head,x);
     }
     else if(op==5)
     {
        int pos;
        cout<<"enter position:";
        cin>>pos;
        delete_from_position(head,pos);
     }
     else if(op==6)
     {
        break;
     }



      }
    return 0;
}