#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> price(n);

    for (int i = 0; i < n; i++)
        cin >> price[i];

    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            dp[i] = max(dp[i], price[j] + dp[i - j - 1]);
        }
    }

    cout << dp[n] << endl;

    return 0;
}
