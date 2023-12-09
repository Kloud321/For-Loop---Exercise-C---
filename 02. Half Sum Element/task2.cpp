#include <iostream>
#include <climits> // За използване на INT_MIN (минимална стойност за int)
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxNum = INT_MIN; // Инициализираме максималния елемент с най-малката възможна стойност
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        sum += num;

        if (num > maxNum) {
            maxNum = num;
        }
    }

    int diff = abs(maxNum - (sum - maxNum)); 

    bool found = false;
    for (int i = 0; i < n; i++) {
        if ((sum - maxNum) == maxNum) {
            found = true;
            cout << "Yes" << endl;
            cout << "Sum = " << maxNum << endl;
            break;
        }
    }

    if (!found) {
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    return 0;
}
