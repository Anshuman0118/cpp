// #include<bits/stdc++.h>//simple rectangle star printing
// using namespace std;
// int main(){
//     for (int i = 0; i <=5; i++)
//     {
//         for(int j=0;j<=5;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
    
// }
// #include<bits/stdc++.h>//right angled triangle
// using namespace std;
// int main(){
//     for(int i=0;i<=5;i++){
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include<bits/stdc++.h>//hollowsquare
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=n-1;j++){
//             if(i==0||i==n-1||j==0||j==n-1){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
// }
// #include<bits/stdc++.h>//upsidedown right angled triangle
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             if(j>i){
//                 cout<<"*";
//             }
            
            
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>//number wala right angled triangle
//  using namespace std;
//  int main(){
//      for(int i=1;i<=5;i++){
//          for(int j=1;j<i;j++){
//             cout<<j;
//          }
//          cout<<endl;
//      }
//  }
// #include<bits/stdc++.h>
// using namespace std;//right handed right angled triangle
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j>n-i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }

//         }
//         cout<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;//number straight triagle.
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<2*n;j++){
//             if(j>n-i&&j<n+i){
//                 cout<<i;
//             }else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
            if(i<=n){
                if(j<n+i&&j>n-i){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            else{
                if((j>n-i-5&&j<n+i-5)||(j>((2*n+1)-i+1))){
                    cout<<"*";
                }
                // if(j>((2*n+1)-i+1)){
                //     cout<<"*";
                // }
                else{
                    cout<<" ";
                }
            }
        
        }
        cout<<endl;
    }
}