#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    int k,comparisons=0,shifts=0,i,j;
    for(i=1;i<n;i++){
        k = arr[i];
        j=i-1;
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            comparisons++;
            shifts++;
        }
        arr[j+1] = k;
        comparisons++;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout << endl;
    cout<<"comparisons = "<<comparisons<<endl;
    cout<<"shifts = "<<shifts<<endl;
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
        insertion_sort(arr,n); 
    }
    return 0;
}