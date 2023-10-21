#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int digit1 = n / 100;
    int digit2 = (n / 10) % 10;
    int digit3 = n % 10;

    if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
