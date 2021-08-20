#include<iostream>
#include<math.h>
using namespace std;
int pair_count(int arr[], int n, int key){
    int i,j,k,f=0,count=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
             if(fabs(arr[i]-arr[j]) == key){
                count++;  
                f=1;
             }
            
        }
    }
    if(f==0)
        return -1;
    return count;
}
int main(){
    int t,n,key;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>key;
        int result = pair_count(arr,n,key);
        if(result == -1)
            cout<<"No pair found."<<endl;
        else
            cout<<result;
    }
    return 0;
}