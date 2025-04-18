// contest: Codeforces Global Round 5, problem: (A) Balanced Rating Changes

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n],ar[n],sum=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    ar[i]=a[i]/2;
    sum+=ar[i];
   }
 for(int j=0;j<n;j++){
    if(a[j]%2!=0){
     if(sum<0 && a[j]>0){
        ar[j]++;
        sum++;
     }
     else if(sum>0 && a[j]<0){
         ar[j]--;
         sum--;
     }
    }
 }
  for(auto i:ar){
    cout<<i<<endl;
 }
}
// 
