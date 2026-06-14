#include<bits/stdc++.h>
using namespace std;
bool getSubsum(vector<int>& arr){
    long long sum = 0;
    map<long long,int> mpp;
    
   
    int n=arr.size();
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum==0){
            return true;
            break;
        }

        long long rem=sum-0;
        if(mpp.find(rem) != mpp.end()){ 
            return true;
             break;
        }else{
            if(mpp.find(rem)==mpp.end()){
                mpp[sum]=i;
            }
        }
    }
    return false;

    
}
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
       
       for(int i=1; i<n; i+=2){
        arr[i]=-arr[i];


       }
       if(getSubsum(arr)==true){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       }
    }
}