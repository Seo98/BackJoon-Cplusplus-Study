#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <list>

using namespace std;

#pragma region MyRegion
// 1부터 n까지 모든 소수 출력
void isPrime3(int n) 
{
    bool* isPrime = new bool[n + 1];// n까지 구해야하므로, n+1개를 동적할당

    //먼저 모든 배열을 true로 초기화
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }


    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {//해당수가 소수라면, 출력하고 해당수를 제외한 배수들을 모두 제외
            cout << i << " ";
            for (int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
// O(√n)
bool checkPrime(int n)  // n이 소수인지 true/false로 알려줌
{
    if (n < 2) return false;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime[n];
}
// 에라토스테네스 체
bool isPrime(int x)
{
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

// 약수의 합
int getDivNum(int num) {
    if (num == 1) {
        return 1;
    }
    int answer = 2;
    for (int i = 2;i <= num / 2;i++) {
        if (num % i == 0) {
            answer++;
            //여기서 i는 약수
            //answer는 약수들의 합
        }
    }
    return answer;
}
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
#pragma endregion

int main()
{
    int n;
    while (cin >> n) 
    {
        int c = 1;
        int r = 1 % n;

        while (r != 0) // 0으로 나눠 떨어지지 않는다면? 계속반복
        { 
            r = (r * 10 + 1) % n; // 11, 111, 1111 
            c++;
        }

        cout << c << '\n';   
    }
    return 0;
}