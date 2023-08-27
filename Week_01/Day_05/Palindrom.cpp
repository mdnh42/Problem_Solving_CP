// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

/*
    itzmrnh
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;
bool is_palindrome(int n)
{
    string num_str = to_string(n);
    int left = 0;
    int right = num_str.length() - 1;

    while (left < right)
    {
        if (num_str[left] != num_str[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

void print_reversed_and_palindrome(int n)
{
    int reversed_n = 0;
    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        reversed_n = reversed_n * 10 + digit;
        temp /= 10;
    }

    cout << reversed_n << endl;

    if (reversed_n == 0)
        cout << "NO" << endl;
    else if (is_palindrome(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int N;
    cin >> N;
    print_reversed_and_palindrome(N);
    return 0;
}
