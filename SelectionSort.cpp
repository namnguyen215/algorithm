#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool ok=false;
    for(int i=0;i<n-1;i++)
    {
        ok=false;
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[min]){
                min=j;
                ok-true;
            }
                
        }
        swap(a[min],a[i]);
        if(ok==false)
        {
            cout<<"Buoc "<<i+1<<": ";
            for(int k=0;k<n;k++)
                cout<<a[k]<<" ";
            cout<<endl;
        }
    }
}