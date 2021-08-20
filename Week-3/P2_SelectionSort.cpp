#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    int min,comparisons=0,swaps=0,i,j;
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            comparisons++;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        swaps++;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout << endl;
    cout<<"comparisons = "<<comparisons<<endl;
    cout<<"swaps = "<<swaps<<endl;
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
        selection_sort(arr,n); 
    }
    return 0;
}