#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a + b + (a * b) == 111)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
