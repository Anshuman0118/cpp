#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
    rectangle(){
    int l,b;
    cin>>l>>b;
    cout<<l*b<<endl;
    cout<<2*(l+b)<<endl;
    };
    // void Area(int a, int b){//using class.
    //     cout<<a*b<<endl;
    // }
    // void Perimeter(int a, int b){
    //     cout<<2*(a+b);
    // }
//     rectangle(int l, int b){//using disturctor.
//         cout<<l*b<<endl;
//         cout<<2*(l+b);
//     }
 };
 int main(){
    rectangle R1;
    return 0;

 }
// int main(){
//     rectangle(7,6);
//     return 0;
// }
// int main(){

//     rectangle R1;
//     R1.Area(5,10);
//     R1.Perimeter(5,10);
// }