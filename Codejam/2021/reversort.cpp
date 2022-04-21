#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long int ll;
ll cont=0;
ll oo=1e9;
int jthMin(vector<int>L,int in,int fin){
    ll temp=0;
    ll tempArr=oo;
    for(int i=in;i<fin;i++){
        if(L[i]<tempArr){
            temp=i;
            tempArr=L[temp];
        }
    }
    return temp;
}
void reversort(vector<int>L,int x,int j){
    for(int i=x;i<j-1;i++){
        int jth=jthMin(L,i,j);
        if(jth==i){
            cont++;
            continue;
        }
        //cout<<jth<<endl;

        reverse(L.begin()+i,L.begin()+jth+1);
        /*
        for_each(L.begin(),L.end(),[&](int a){
             cout<<a<<" ";
             });
             cout<<endl;
             */
        cont+=jth-(x+i)+1;
        //reversort(L,x+i,jth);
    }
}
int main(){
	vector<int>arr;
	int t;
	ll cases=1;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

        reversort(arr,0,arr.size());
        cout<<"Case #"<<(cases++)<<": "<<cont<<endl;
        arr.clear();
        cont=0;
	}
    return 0;
}
