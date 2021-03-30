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
node *addtail(node *ans,int x){
    node *p=ans;
    while(p->next!=NULL)
        p=p->next;
    p=add(p,x);
    return ans;
}
node *deleteBigger(node *list,int k)
{
    node *tmp=list;
    node *ans=new node;
    while(tmp!=NULL){
        if(tmp->data<=k){
            ans=create(tmp->data);
            tmp=tmp->next;
            break;
        }
        tmp=tmp->next;
    }
    while(tmp!=NULL){
        if(tmp->data<=k){
            ans=addtail(ans,tmp->data);
        }
        tmp=tmp->next;
    }
    return ans;
}
void print(node *list){
    node *tmp=list;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    int n,x;cin>>n>>x;
    node *list=create(x);
    node *p=list;
    for(int i=1;i<n;i++){
        cin>>x;
        p=add(p,x);
    }
    int k;cin>>k;
    node *pos=list;
    for(int i=0;i<k;i++)
        pos=pos->next;
    k=pos->data;
    list=deleteBigger(list,k);
    print(list);
}