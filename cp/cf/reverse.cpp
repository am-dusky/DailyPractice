//Codeforces Round #771 (Div. 2)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
  
  ll n;
  cin>>n;
  ll arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int flg=0;
  for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
      flg=1;
      break;
    }
  }
 
  if(flg==0){
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<"\n";
  }
  else{
    int l=0,r=0,index;
    //int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
          index=i+1;
          r=i;
          break;
        }
    }
 
    for(int i=0;i<n;i++){
        if(arr[i]==index){
          l=i;
          break;
        }
    }
    //cout<<l<<" "<<r<<"      ";
    reverse(arr+r,arr+l+1);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<"\n";
  }
}
 
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
#endif
 
  int t;
  cin>>t;
  while(t--){
    solve();
    }
    return 0;
}
