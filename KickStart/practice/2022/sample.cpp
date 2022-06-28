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
int cases=1;
typedef long long ll;
typedef pair<ll, ll> pii;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ll total = 0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            total+=a;
        }
        int ans = (int)(total/m);
        ans = total-(ans*m);
        cout<<"Case #"<<(cases++)<<": "<<ans<<endl;
    }
    return 0;
}
