#include<bits/stdc++.h>
using namespace std;
vector<int> vt;
bool check09(int x){
    int digit;
    while(x){
        digit=x%10;
        if(digit!=0 && digit!=9)
            return false;
        x=x/10;
    }
    return true;
}
void khoitao()
{
    for(int i=90;i<=99999;i++){
        if(check09(i))
            vt.push_back(i);
    }
}
int main()
{
    khoitao();
    cout<<vt.size()<<" "<<vt[vt.size()-1];
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=0;i<vt.size();i++){
            if(vt[i]%n==0){
                cout<<vt[i];
                break;
            }
        }
    }
}