// D. Retaliation
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(vector<ll>&a,int n){
    if(n==1)return a[0]==0;
    ll A=1,B=n,C=a[0],D=2,E=n-1,F=a[1];
    ll det=A*E-B*D;
    if(det==0)return 0;
    ll x_num=C*E-B*F,y_num=A*F-C*D;
    if(x_num%det!=0||y_num%det!=0)return 0;
    ll x=x_num/det,y=y_num/det;
    if(x<0||y<0)return 0;
    for(int i=0;i<n;i++)
        if(a[i]!=x*(i+1)+y*(n-i))return 0;
    return true;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<(check(a,n)?"YES\n":"NO\n");
    }
    return 0;
}
