#include<bits/stdc++.h>
using namespace std;
struct node
{
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
    node* tmp=create(x);
    p->next=tmp;
    return tmp;
}

node *addHead(node *list,int val)
{
    node *tmp=new node;
    tmp->data=val;
    tmp->next=list;
    list=tmp;
    return list;
}

node *addTail(node *list,int val)
{
    node *p=list;
    while(p->next!=NULL)
        p=p->next;
    node *tmp=new node;
    tmp->data=val;
    tmp->next=NULL;
    p->next=tmp;
    // return p;
    return list;
}

node *addMid(node *list,int val,int pos)
{
    node *p=list;
    for(int i=0;i<pos-1;i++)
        p=p->next;
    node *tmp=new node;
    tmp->data=val;
    tmp->next=p->next;
    p->next=tmp;
    return list;
}

void print(node *list)
{
    node *p=list;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
        
}
int main()
{
    int n,x,pos,val;
    cin>>n>>x;
    node *list=create(x);
    node *p=list;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        p=add(p,x);
    }
    cin>>pos>>val;
    if(pos==0)
        list=addHead(list,val);
    else if(pos==n)
        list=addTail(list,val);
    else 
    {
        list=addMid(list,val,pos);
    }
    print(list);
}