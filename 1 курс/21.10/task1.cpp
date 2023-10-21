#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int firstDigit = n / 10;
    int secondDigit = n % 10;

    if (firstDigit > secondDigit)
    {
        cout << "The max digit is " << firstDigit << endl;
        cout << "The min digit is " << secondDigit << endl;
    }
    else if (firstDigit < secondDigit)
    {
        cout << "The max digit is " << secondDigit << endl;
        cout << "The min digit is " << firstDigit << endl;
    }
    else
        cout << "They are equal";
}
