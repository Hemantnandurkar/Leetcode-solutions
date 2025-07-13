#include<iostream>
using namespace std;

// this is Pass by value
                   // Example 1
// void dosomething(int num){
//    cout<<num<<endl;
//    num +=5;
//    cout<<num<<endl;
//    num +=5;
//    cout<<num<<endl;
// }
// int main(){
//     int num=10;
//     dosomething(num);
//     cout<<num<<endl;
//     return 0;
// }

       // Example 2
// void dosomething(string s){
//      s[0]='t';
//      cout<<s<<endl;
// }
// int main(){
//     string s="raj";
//     dosomething(s);
//     cout<<s<<endl;

//     return 0;
// }

   // Pass by reference
   // Example 1
// void dosomething(string &s){
//      s[0]='t';
//      cout<<s<<endl;
// }
// int main(){
//     string s="raj";
//     dosomething(s);
//     cout<<s<<endl;

//     return 0;
// }

 //Example 2 

 void dosomething(int &num){
   cout<<num<<endl;
   num +=5;
   cout<<num<<endl;
   num +=5;
   cout<<num<<endl;
}
int main(){
    int num=10;
    dosomething(num);
    cout<<num<<endl;
    return 0;
}