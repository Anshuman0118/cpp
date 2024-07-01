// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n;j++){
//             if(j>n-i&&j<n+i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n;j++){
//             if(j>n-i&&j<n+i){
//             cout<<"*";}
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j<n+i&&j>n-i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int k=1;k<=2*n;k++){
            if(k<n+i-1&&k>n-i-1 ){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}