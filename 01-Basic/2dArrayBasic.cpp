#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[2][3];

    arr[1][2] = 34;
    cout << arr[1][2] << " " << arr[1][3]; //[1][3] gives garbage value

    cout << '\n'; // '\n' works.
    string s = "Om Raja";
    cout << s;

    return 0;
}