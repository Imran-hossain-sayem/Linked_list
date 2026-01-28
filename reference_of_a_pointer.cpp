#include<bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
  p=NULL;
   //cout<<&p<<endl;
}
int main()
{
      int val=10;
      int *p=&val;
      fun(p);
      cout<<p;
    return 0;
}