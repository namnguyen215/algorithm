#include<iostream>
using namespace std;
    int a[5]={3,4,19,50,69};
    int n=5,x=4;
string BinSearch(int left,int right){
    if(right>=left){
        int mid=(left+right)/2;
        if(x==a[mid]) return "FOUND";
        else if(x>a[mid]) BinSearch(mid+1,right);
        else BinSearch(left,mid-1);
    }
    return "NOT FOUND";
}
int main()
{
    int left=0,right=n-1;
    cout<<BinSearch(left,right);
}