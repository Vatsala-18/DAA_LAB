#include<iostream>
#include<math.h>

using namespace std;
void jump_search(int arr[], int n, int num){
    int c=0;
    int comp=0;
    int prev = 0;
    int stepSize = sqrt(n);
    while(arr[stepSize] <= num && stepSize < n){  
        prev = stepSize;       
        stepSize += sqrt(n);
    }
    for(int i=prev;i<stepSize;i++){
        comp++;
        if(arr[i] == num){
            cout<<"\nPresent "<<comp;
            c=1;
            break;
        }
    
    }
    if(c==0){
        cout<<"\nNot Present "<<comp; 
    }
    
    
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
        jump_search(arr,n,num); 
    }
    return 0;
}