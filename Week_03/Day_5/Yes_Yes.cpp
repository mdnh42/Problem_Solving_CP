#include <iostream>
#include <string>
using namespace std;

int main()
{
    string full = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    for (int i = 0; i < t; i++)
    {
        string input;
        getline(cin, input);

        if (full.find(input) != string::npos)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}