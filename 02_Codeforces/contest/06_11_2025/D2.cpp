#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<ll>pre,q;
ll n,T,i,op,x;
ll rd(){
	ll f=1,s=0;char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		s=(s<<1)+(s<<3)+(ch^48);
		ch=getchar();
	}
	return s*f;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	n=rd();T=rd();
    
	for(i=1;i<=n;i++) pre.insert(i);
	while(T--){
		op=rd();
		if(op==1){
			q.insert(*pre.begin());
			pre.erase(pre.begin());
		}
		else if(op==2){
			x=rd();
			q.erase(x);
		}else{
			cout<<*q.begin()<<'\n';
		}
	}
	return 0;
}