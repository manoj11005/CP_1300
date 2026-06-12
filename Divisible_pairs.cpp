#include<bits/stdc++.h>
using namespace std;
int main(){
       freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        
        int n,x,y;
        cin>>n>>x>>y;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        map<pair<long long,long long>,long long> mp;
        long long ans=0;
        for(int i=0; i<n; i++){
            long long rx=arr[i]%x;
            long long ry=arr[i]%y;
            long long needx=(x-rx)%x;
            ans=ans+mp[{needx,ry}];
            mp[{rx,ry}]++;
        }
        cout<<ans<<endl;

    }
}