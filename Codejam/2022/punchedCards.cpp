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
        int r,c;
        cin>>r>>c;
        r=(2*r)+1;
        c=(2*c)+1;
        cout<<"Case #"<<(cases++)<<":"<<endl;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(i<3 && j<3){
                    cout<<".";
                    continue;
                }
                if(i%2!=0){
                    if(j%2==0){
                        cout<<"-";
                    }
                    else{
                        cout<<"+";
                    }
                }else{
                    if(j%2==0){
                        cout<<".";
                    }
                    else{
                        cout<<"|";
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
