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
void print_list(Node *head)
{
    Node *tmp=head;
    cout<<"linked list is:";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
      Node *head=NULL;
      while(true)
      {
        int x;
        cin>>x;
       
        if(x==-1)
        {
            break;
        }
         insert_at_tail(head,x);
      }

      print_list(head);

    return 0;
}