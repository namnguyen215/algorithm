#include<iostream>
using namespace std;
int binsearch(int a[],int n,int x){
	int l=0,r=n-1;
	int mid=(l+r)/2;
	while(r>=l)
	{
		if(a[mid]==x) return mid+1;
		else if(x<a[mid]) r=mid-1;
		else l=mid+1;
		mid=(l+r)/2;	
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n+1];
		int x;cin>>x;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int res=binsearch(a,n,x);
		if(res==0) cout<<"NO"<<endl;
		else cout<<res<<endl;
	}
}
