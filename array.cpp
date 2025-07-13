#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "gives input: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[2] += 10;
    cout<<arr[2];
    return 0;
}