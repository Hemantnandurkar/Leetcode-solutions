#include<bits/stdc++.h>
using namespace std;
// functions are the set of code which performs something for you 
// functions are used to modulerise code
// functions are used to increase readability
// functions are used to use same code multiple times
// void --> which does not return anything
// return
// parameterised
// non parameterised

void printname(string name){
    cout<<"Hey "<<name;
}
int main(){
    string name;
    cout<<"enter your name"<<endl;
    cin>>name;
    printname(name);
    return 0;
}