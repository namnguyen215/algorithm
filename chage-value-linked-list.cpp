#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *create(int x)
{
    node *tmp=new node;
    tmp->data=x;
    tmp->next=NULL;
    return tmp;
}
node *add(node *p,int x)
{
    node *tmp=create(x);
    p->next=tmp;
    return tmp;
}
node *change(node *list,int a,int b)
{
    node *tmp=list;
    while(tmp->next!=NULL)
    {
        if(tmp->data==a)
            tmp->data=b;
        tmp=tmp->next;
    }
    return list;
}
void print(node *list)
{
    node *tmp=list;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    int n,x;cin>>n>>x;
    node *list=create(x);
    node *p=list;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        p=add(p,x);
    }
    int a,b;
    cin>>a>>b;
    list=change(list,a,b);
    print(list);
}