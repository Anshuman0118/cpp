#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int a;
    int b;
    int i;
    
    for(i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(i=0;i<t;i++){
        cin>>a>>b;
        cout<<arr[b]-arr[a-1];
    }
}