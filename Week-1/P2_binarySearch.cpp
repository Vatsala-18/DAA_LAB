#include<iostream>
using namespace std;
int comp=0;
int binary_search(int arr[], int n, int num){
    int first = 0, last = n-1;
    int mid =0;
    while(first <= last){
        mid= first+((last-first)/2);
        if(num <= arr[mid]){
            last = mid-1;
        }
        else{
            first = mid+1;
        }
        comp++;
    }
    if(num == arr[first]){
        return first;
    }
    else if(num == arr[last]){
        return last;
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
        int result = binary_search(arr,n,num);
        if(result == -1){
                cout<<"\nNot Present "<<comp;
        }
         else{
            cout<<"\nPresent "<<comp;
         }
         comp=0;
    }
    return 0;
}