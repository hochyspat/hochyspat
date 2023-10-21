#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 100 == ((n / 1000 % 10) * 10 + n / 10000))
        cout << "YES";
    else
        cout << "NO";
}
