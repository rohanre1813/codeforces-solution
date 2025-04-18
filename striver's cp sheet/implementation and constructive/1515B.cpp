// B. Phoenix and Puzzle (1515B)


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while (t--) {
    cin>>n;
    if(n%2!=0){cout<<"NO"<<endl;}
    else {
        long long b=n/2,bi=n/4;
        long long s=sqrt(b),y=sqrt(bi);
        if(n%4==0){
            if(s*s==b || y*y==bi){
                cout<<"YES"<<endl;
            }
            else{cout<<"NO"<<endl;}
        }
        else{
            if(s*s==b){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
}
