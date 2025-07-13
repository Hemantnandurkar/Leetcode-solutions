#include<iostream>
using namespace std;
/*
 a school has following grading system
 a. below 25 - F
 b.25 to 44 - E
 c. 45 to 49 - D
 d. 50 to 59 - C
 e. 60 to 79 - B
 f. 80 to 100 - A
 ask user to enter marks and print corresponding grade
*/
int main(){
    int marks;
    cin>>marks;
    if(marks <= 25){
        cout<<"your grade is F"<<endl;
    }
    else if( marks <=44){
        cout<<"your grade is E"<<endl;
    }
    else if( marks <=49){
        cout<<"your grade is D"<<endl;
    }
    else if( marks <= 59){
        cout<<"your grade is C"<<endl;
    }
    else if( marks <= 79){
        cout<<"your grade is B"<<endl;
    }
    else if( marks <= 100){
        cout<<"your grade is A"<<endl;
    }
    else if(marks > 100){
        cout<<"invalid marks"<<endl;
    }
    return 0;
}