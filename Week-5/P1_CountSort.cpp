#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char arr[n];
        int freq[26] = {0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            freq[arr[i]-'a']++;
        }
        int max=0, temp;
        for(int i=0;i<n;i++){
            if(max < freq[i]){
                max = freq[i];
                temp = i;
            }
        }
        if(max > 1){
            cout<<(char)(temp+97)<<"-"<<max<<endl;
        }
        else{
            cout<<"No Duplicates Found"<<endl;
        }
    }
    return 0;
}