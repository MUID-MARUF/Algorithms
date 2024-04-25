#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int findLIS(const string& str) {
    int n = str.size();
    if (n == 0) return 0;

    // dp[i] will hold the length of the LIS ending at index i
    vector<int> dp(n, 1);

    // Compute the LIS for each position
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (str[i] > str[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    // The maximum element in dp will be the length of the LIS
    return *max_element(dp.begin(), dp.end());
}

int main() {
    string input = "abdgcfbe";
    int lis = findLIS(input);
    cout << "Length of Longest Increasing Subsequence is: " << lis << endl;
    return 0;
}
