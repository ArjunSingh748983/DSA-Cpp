#include <bits/stdc++.h>
using namespace std;
// Print all prime numbers less than n
vector<int> PrintPrimes(int n)
{
    vector<int> ans;
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) ans.push_back(i);
        for (int j = i * i; j <= n; j = j + i) isPrime[j] = false;
    }
    return ans;
}
int main() {
    vector<int> ans = PrintPrimes(10);
    for (auto x : ans)
        cout << x << " ";
    return 0;
}