#include <iostream>
using namespace std;

int main()
{
    double x, y;

    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "The first plane" << endl;
    else if (x < 0 && y > 0)
        cout << "The second plane" << endl;
    else if (x < 0 && y < 0)
        cout << "The third plane" << endl;
    else
        cout << "The fourth plane" << endl;
}
