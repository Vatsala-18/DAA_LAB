#include<iostream>
using namespace std;
void search_dup(int arr[], int n, int num){
    int first = 0, last = n-1,f=0;
    int mid =0,count=0;
    int index;
    while(first <= last){
        mid= first+((last-first)/2);
        if(num == arr[mid]){
            index = mid;
            f=1;
            break;
        }
        else if(num < arr[mid]){
            last = mid-1;
        }
        else{
            first = mid+1;
        }
    }
    int left = index-1, right = index+1;
    while(arr[left]==num && left >= 0){
        count++;
        left--;
    }
    while(arr[right]==num && right <= n-1){
        count++;
        right++;
    }
    if(f==0)
        cout<<"\nElement not present"<<endl;
    else
        cout<<num<<" - "<<count+1<<endl;
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
        search_dup(arr,n,num);
        
    }
    return 0;
}