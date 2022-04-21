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

int main() {
    int t,cases=1;
    cin>>t;
    while(t--){
        int n,cont=0,temp = 1;
        cin>>n;
        vector<ll>l(n,0);
        for(ll &i:l){
            cin>>i;
        }
        sort(l.begin(),l.end());
        for(int i=0;i<n;i++){
            if(l[i]>=(temp)){
                cont++;
                temp++;
            }
        }
        cout<<"Case #"<<(cases++)<<": "<<cont<<endl;
    }
    return 0;
}
