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
    cout<<"Enter num. of test cases - ";
    cin>>t;
    while(t--){
        
        cout<<"\nEnter num of elements - ";
        cin>>n;
        int arr[n];
        cout<<"\nEnter array - ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"\nEnter search element - ";
        cin>>num;
        int result = linear_search(arr,n,num);
        if(result == -1){
                cout<<"\nNumber not present ";
        }
         else{
            cout<<"\nNumber present at "<<result+1<<" position";
         }
    }
}