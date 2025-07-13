// #include<bits/stdc++.h> 
#include<iostream> 
using namespace std;
//write a program that takes an inout of age 
//and prints if u are adult or not

int main(){
    int age;
    cin>>age;
    if(age >= 18){
        cout<<"you are an  adult"<<endl;
    }
    else if(age < 18){
        cout<<"you are a minor"<<endl;
    }
     
    return 0;
}