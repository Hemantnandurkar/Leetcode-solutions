#include <iostream>
using namespace std;

// int sum(int num1, int num2)
// {
//     int num3 = num1 + num2;
//     return num3;
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;
// }

int maxx(int num1, int num2){
    if(num1 >= num2) {
        return num1;
    }
    // else return num2;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    int maximum=maxx(num1,num2);
    cout<<maximum;

    return 0;
}