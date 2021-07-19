#include<iostream>
using namespace std;
int linear_search(int arr[], int n, int num){
    for(int i=0;i<n;i++){
        if(num == arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int t,n,num;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>num;
        int result = linear_search(arr,n,num);
        if(result == -1){
                cout<<"\nNot Present "<<n;
        }
         else{
            cout<<"\nPresent "<<result+1;
         }
    }
}