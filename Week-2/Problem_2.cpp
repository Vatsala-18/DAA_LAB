#include<iostream>
using namespace std;
void sequence(int arr[], int n){
    int i,j,k,f=0;
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(arr[i]+arr[j] == arr[k]){
                    cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                    f=1;
                    break;
                }
            }
        }
    }
    if(f==0)
        cout<<"No sequence found."<<endl;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sequence(arr,n);
    }
    return 0;
}