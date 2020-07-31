#include <iostream>
constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main()
{
    using namespace std;
    const double pi = 22.0 / 7;

    cout << "constant pi contains value " << pi << endl;
    cout << "constexpr GetPi() returns value " << GetPi() << endl;
    cout << "constexpt TwicePi() returns value " << TwicePi() << endl;

    return 0;
}