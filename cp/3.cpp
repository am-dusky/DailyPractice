#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
  ll n;
  cin>>n;

  if(n==1)
    cout<<1<<" "<<1<<"\n";
  else if(n==2)
    cout<<1<<" "<<1<<" "<<2<<"\n";
  else{
    ll arr[n+1];
    ll p=(pow(2,n));
    // cout<<"p=="<<p<<" ";
    ll div=(p)/(n+1);
    // cout<<div<<" ";
    arr[0]=div;
    arr[1]=div;

    ll sum=div+div;
    // div=p-sum;
    // cout<<div<<" "<<sum<<" ";
    ll k=1;
    for(int i=2;i<=n;i++){
      if(k!=div && i!=n){
        arr[i]=k;
        // cout<<"1:::"<<arr[i]<<"\n";
        sum+=arr[i];
        k++;
      }
      else if(i==n ){
        // cout<<"n:::"<<arr[i]<<"\n";
        p=p-sum;
        arr[i]=p;
        break;
      }
      else if(k==div){
        // cout<<"same:::"<<arr[i]<<"\n";
        k++;
        arr[i]=k;
      }
    }
    sort(arr,arr+n+1);
    for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
  }

}

 
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("in1.txt","r",stdin);
    freopen("out1.txt","w",stdout);
#endif

  int t;
  cin>>t;
  while(t--){
    solve();
    }
    return 0;
}
