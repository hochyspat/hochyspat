#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int leapYearsBeforeEnd = b / 4 - b / 100 + b / 400;
    int leapYearsBeforeStart = (a - 1) / 4 - (a - 1) / 100 + (a - 1) / 400;

    cout << leapYearsBeforeEnd - leapYearsBeforeStart << endl;
}
