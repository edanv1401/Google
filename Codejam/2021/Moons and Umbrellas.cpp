#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    for(int cases=0;cases<t;cases++){
        ll x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        cin.ignore();
        ll ans=0;
        ll prev='I';
        for (ll i=0;i<s.size();i++){
            if(s[i]=='C'){
                if(prev=='J'){
                    ans+=y;
                }
                prev='C';
            }else if(s[i]=='J'){
                if(prev=='C'){
                    ans+=x;
                }
                prev='J';
            }else{

            }
        }
        cout<<"Case #"<<(cases+1)<<": "<<ans<<endl;

    }
}
