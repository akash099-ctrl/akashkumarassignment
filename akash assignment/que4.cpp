#include <iostream>
using namespace std;

int main() {
    float Price, R, Time, SI;

    cout << "Enter Principal Amount: ";
    cin >> Price;

    cout << "Enter Rate of Interest: ";
    cin >> R;

    cout << "Enter Time (in weeks): ";
    cin >> Time;

    SI = (Price * R * Time) / 100;

    cout << "Simple Interest = " << SI << endl;

    return 0;
}