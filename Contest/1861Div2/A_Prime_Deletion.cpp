#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> deleteDigit(vector<int> digits)
{
    int n = digits.size();
    if (n == 2)
    {
        return {};
    }

    int i = 0;
    for (; i < n; i++)
    {
        digits.erase(digits.begin() + i);
        if (isPrime(digits))
        {
            return digits;
        }
        digits.insert(digits.begin() + i, digits[n - 1]);
    }

    return {};
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<int> digits(9);
        for (int j = 0; j < 9; j++)
        {
            cin >> digits[j];
        }

        vector<int> result = deleteDigit(digits);
        if (result.empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < result.size(); i++)
            {
                cout << result[i];
            }
            cout << endl;
        }
    }

    return 0;
}
