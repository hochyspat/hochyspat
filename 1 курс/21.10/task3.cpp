#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cout << "Enter the value in degrees" << endl;
    cin >> x >> y;
    const double PI = acos(-1.0);

    x *= PI / 180;
    y *= PI / 180;

    if (((1 - tan(x)) < 0) && (0 < abs(1 / tan(x)) && abs(1 / tan(x)) < 1))
        cout << "The expression doesn't make sense" << endl;
    else 
    {
        double result = pow((1 - tan(x)), (1 / tan(x))) + cos(x - y);
        cout << "Result (1 - tg(x))^(ctg(x)) + cos(x - y) is " << result << endl;
    }
        
}
