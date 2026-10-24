#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}