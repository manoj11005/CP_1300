#include<bits/stdc++.h>
using namespace std;
int main(){
      freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int> nextDiff(n,-1);
        for(int i=n-2; i>=0; i--){
            if(arr[i] != arr[i+1]){
                nextDiff[i]=i+1;
            }else{
                nextDiff[i]=nextDiff[i+1];
            }
        }
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            if(nextDiff[l] != -1 && nextDiff[l]<=r){
                cout<<l+1<<" "<<nextDiff[l]+1<<endl;
            }else{
                cout<<-1<<" "<<-1<<endl;
            }

            
            
        }
        cout<<endl;
    }
}