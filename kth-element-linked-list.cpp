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

void print(node *list,int k)
{
    node *tmp=list;
    for(int i=0;i<k;i++)
        tmp=tmp->next;
    cout<<tmp->data<<endl;
}
int main()
{
    int n,x;
    cin>>n>>x;
    node *list=create(x);
    node *p=list;
    for(int i=1;i<n;i++){
        cin>>x;
        p=add(p,x);
    }
    int k;cin>>k;
    print(list,k);
}