#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ch;
	cin >> ch;
	int ascii = ch;
	if (ascii >= 65 && ascii <= 90)
	{   
        cout << "1";
	}
	else if(ascii >= 97  && ascii <= 122)
	{   
        cout << "0";
    }
    else 
    {
        cout << "-1";
    }
    return 0;
}
