#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define fast_reader ios::sync_with_stdio(0);cin.tie(0);
#define all(x) x.begin(),x.end()
const int N = 1e5+10;
const int oo = 1e9;
typedef long long ll;
typedef pair<ll, ll> pii;
ll cases=1;
ll chars[256];
bool all_pairs(vector<int>pairs){
    for(int i:pairs){
        if(i%2!=0)return false;
    }
    return true;
}
bool only_one(vector<int>pairs){
    int n=0;
    for(int i:pairs){
        if(i%2)n++;
        if(n>1)return false;
    }
    return (n == 1);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,ans = 0;
        cin>>a>>b;
        string s;
        cin>>s;
        for(int i=0;i<b;i++){
            memset(chars, 0, sizeof chars);
            int l,r;
            cin>>l>>r;
            l--,r--;
            string result = s.substr(l,r-l+1);
            if(result.size()==1) ans++;
            else {
                vector<int>letters;
                for(char c:result)chars[c]++;
                for(int i=0;i<256;i++)if(chars[i]>0)letters.pb(chars[i]);
                int n = (int) result.size();
                if(letters.size()==1) ans++;
                else if(n==2 && letters.size() == 1 && letters[0]%2==0) ans++;
                else if(n%2==0 && all_pairs(letters)) ans++;
                else if (n%2==1 && only_one(letters))ans++; 
            }
        }
        cout<<"Case #"<<(cases++)<<": "<<ans<<endl;
    }
    return 0;
}
