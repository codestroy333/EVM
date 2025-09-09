#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double count_pi(int n) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        result += 4 * (pow(-1, i) / (2 * i + 1));
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << count_pi(n) << endl;
    return 0;
}