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
        map<int,int> mpp;
        for(int i=0; i<n; i++){
            for(int j=2; j*j<=arr[i]; j++){
                while(arr[i]%j==0){
                    mpp[j]++;
                    arr[i]=arr[i]/j;
                }
            }
            if(arr[i]>1){
                mpp[arr[i]]++;
            }

        }
        int flag=1;
        for(auto &it:mpp){
            if(it.second%n != 0){
                flag=0;
                break;

            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}