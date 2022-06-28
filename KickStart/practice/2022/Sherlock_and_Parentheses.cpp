#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define fast_reader ios::sync_with_stdio(0);cin.tie(0);

const int N = 1e5+10;
const int oo = 1e9;
typedef long long ll;
typedef pair<ll, ll> pii;
ll answer(ll n){
    return (ll)(n * (n + 1) / 2);
}
ll cases=1;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll l,r,ans;
        cin>>l>>r;
        if(!l || !r)ans=0;
        else {
            ans = answer(min(l,r));
        }
        cout<<"Case #"<<(cases++)<<": "<<ans<<endl;
    }
    return 0;
}
