#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

node *creatNode(int x)
{
    node *temp = new node;  //Cap bo nho cho node moi
    temp->next = NULL;      //Vi la node moi nen ko co thanh phan ke tiep
    temp->data = x;         //Dat gia tri cho node moi la x
    return temp;
}

//Them phan tu vao cuoi linked-liust khi con tro dang o cuoi
node *add(node* p,int x)
{
    node* temp = creatNode(x);     //Cap bo nho cho node moi
    p->next =temp;                 //Gan node vao cuoi ds
    return temp;                   // return pointer
}

//In, duyet linked-list
void print(node *list)
{
    node *tmp=list;             //Dung mot node temp de ko mat vi tri node dau
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";   //In ra gia tri cua node hien tai
        tmp=tmp->next;          //Nhay sang node tiep theo
    }
}
int main()
{
    int n,x;
    cin>>n>>x;                      //Nhap vao so node va gia tri node dau tien
    node *list = creatNode(x);      //Tao node dau tien
    node *p =list;                  //Tao mot con tro de khong lam mat dau node dau tien
    for(int i=1;i<n;i++)
    {
        cin>>x;
        p=add(p,x);
    }
    print(list);
}