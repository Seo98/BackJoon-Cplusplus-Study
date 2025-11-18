#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <list>

using namespace std;

// 최대 공약수
int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
// 최소 공배수
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << gcd(a, b) << "\n";
    cout << lcm(a, b) << "\n";


    return 0;
}