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
node *deleteHead(node *list)
{
    node *tmp=list;
    tmp=tmp->next;
    delete(list);
    return tmp;
}

node *deleteTail(node *list)
{
    node *tmp=list;
    while(tmp->next->next!=NULL)
        tmp=tmp->next;
    delete(tmp->next);
    tmp->next=NULL;
    return list;
}
node *deleteMid(node *list,int k)
{
    node *tmp=list;
    for(int i=0;i<k-1;i++)
        tmp=tmp->next;
    node *p=tmp->next;
    tmp->next=tmp->next->next;
    delete(p);
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
    int n,x;cin>>n>>x;
    node *list=create(x);
    node *p=list;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        p=add(p,x);
    }
    int k;cin>>k;
    if(k==0)
        list=deleteHead(list);
    else if(k==n-1)
        list=deleteTail(list);
    else 
        list=deleteMid(list,k);
    print(list);
}