// #include<iostream>
// using namespace std;
// int main(){
//     int count=0;
//     int n;
//     cin>>n;
//     for (int i = 2; i <= n; i++)
//     {
//         if(n%i==0){
//             count=2;
//         }


//     }
//     if(count==2){
//         cout<<"number is prime";
//     }else{
//         cout<<"Number is composite";
//     }
    
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     int a,b;
//     Student(int x, int y){
//         a=x;b=y;
//     }
// }
// int main(){
//     Student S1(10,20);
//     Student S2(S1);
//     Student S2=S1;
// }
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    student(){
        int n;
        cin>>n;
        int ans=0;
        while(n){
            ans=ans*10+n%10;
            n/=10;
        }
        cout<<ans<<endl;
    };
    


};
int main(){
    student s1;
}


