#include <iostream>
using namespace std;

int main() {
    long int n, expsum = 0, actsum = 0;

    do {
        cin >> n;
    } while (n <= 0);

    for (int i = 1; i <= n; ++i) {
        expsum += i;
    }

    long int t[n - 1];
    for (int i = 0; i < n - 1; ++i) {
        cin >> t[i];
        actsum += t[i];
    }

    long int missingNumber = expsum - actsum;
    cout << missingNumber << endl;

    return 0;
}
