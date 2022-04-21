  #include <bits/stdc++.h>
  #include <cstdlib>
  using namespace std;
  typedef long long ll;
  ll solve(ll arr[], int index, int n,ll total){
      if(index == n){
          return 0;
      }
      if(total-arr[index]>=0){
          return solve(arr,index+1,n,total-arr[index])+1;
      }
      return 0;
  }
  int main(){
    int t,cases=1;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      ll arr[n];
      memset(arr,0,sizeof arr);
      for(ll &i:arr){
        cin>>i;
      }
      sort(arr,arr+n);
      cout<<"Case #"<<(cases++)<<": "<<solve(arr, 0, n , k)<<endl;
    }
    return 0;
  }
