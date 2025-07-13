#include <iostream>
using namespace std;
/*
  take the dya no and print the corresponding day
  for 1 print monday
  for 2 print tuesday and so on for 7 days .
*/
// int main(){
//     int numbers;
//     cin>>numbers;
//     if(numbers == 1){
//         cout<<"Monday"<<endl;
//     }
//     else if(numbers == 2){
//         cout<<"Tuesday"<<endl;
//     }
//      else if(numbers == 3){
//         cout<<"Wednesday"<<endl;
//     }
//      else if(numbers == 4){
//         cout<<"Thursday"<<endl;
//     }
//      else if(numbers == 5){
//         cout<<"Friday"<<endl;
//     }
//      else if(numbers == 6){
//         cout<<"Saturday"<<endl;
//     } else if(numbers == 7){
//         cout<<"Sunday"<<endl;
//     }else{
//         cout<<"invalid numbers";
//     }
//     return 0;
//}

// switch loop code
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
    }
    return 0;
}