#include<iostream>
using namespace std;
/*
 take age from user and then decide accordingly 
 1. age < 18 
 print not eligiable for job
 2. age >= 18 and age <=54
 print eligible for job
 3.age >=55 and age <= 60
 print eligible for job, but retirement soon
 4.age > 60 
 print retirement time
 
*/
int main(){
    int age;
    cout<<"enter your age:- "<<endl;
    cin>>age;
    if(age < 18){
        cout<<"you are not eligible"<<endl;
    }
    else if (age >=18 && age <=54){
        cout<<"you are eligible for job"<<endl;
    }
    else if(age >=55 && age <=60){
        cout<<"eligible for job, but retirement soon."<<endl;
    }
    else if(age >= 60 && age <= 65){
        cout<<"retirement time"; 
    }
    else if(age >= 66){
        cout<<"invlaid age";
    }
    return 0;
}