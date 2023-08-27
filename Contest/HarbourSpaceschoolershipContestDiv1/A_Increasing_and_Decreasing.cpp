#include <iostream>
#include <vector>

std::vector<int> increasing_decreasing(int x, int y, int n)
{
    if (x >= y)
    {
        return {}; // Return an empty vector when there's no solution
    }

    std::vector<int> a(n);
    a[0] = x;
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] + 1;
    }

    std::vector<int> b(n - 1);
    b[0] = a[1] - a[0];
    for (int i = 1; i < n - 1; i++)
    {
        b[i] = b[i - 1] - 1;
    }

    bool isStrictlyDecreasing = true;
    for (int i = 0; i < n - 2; i++)
    {
        if (b[i] <= b[i + 1])
        {
            isStrictlyDecreasing = false;
            break;
        }
    }

    if (isStrictlyDecreasing)
    {
        return a;
    }
    else
    {
        return {}; // Return an empty vector when there's no solution
    }
}

int main()
{
    int x, y, n;
    std::cin >> x >> y >> n;

    std::vector<int> a = increasing_decreasing(x, y, n);
    if (!a.empty())
    {
        for (int num : a)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << -1 << std::endl;
    }

    return 0;
}
