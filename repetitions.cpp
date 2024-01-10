#include <iostream>

using namespace std;

int main() {
    string s;

    do {
        getline(cin, s);
    } while (s.length() == 0);

    long int t[s.length()];
    int x = 1;
    int j = 0;

    for (std::string::size_type i = 0; i < s.length() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            x += 1;
        } else {
            t[j] = x;
            j += 1;
            x = 1; 
        }
    }
    t[j] = x;
    long int aux = t[0];
    for (int i = 1; i <= j; ++i) {
        if (t[i] > aux) {
            aux = t[i];
        }
    }

    cout << aux ;
    return 0;
}
