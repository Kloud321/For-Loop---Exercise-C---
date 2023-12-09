#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int rotations, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    cin >> rotations;

    for (int i = 0; i < rotations; i++) {
        int num;
        cin >> num;

        if (num < 200) {
            p1++;
        } else if (num >= 200 && num <= 399) {
            p2++;
        } else if (num >= 400 && num <= 599) {
            p3++;
        } else if (num >= 600 && num <= 799) {
            p4++;
        } else {
            p5++;
        }
    }

    cout << fixed << setprecision(2); // Setting precision to 2 decimal places
    cout << (double(p1) / rotations) * 100 << "%" << endl;
    cout << (double(p2) / rotations) * 100 << "%" << endl;
    cout << (double(p3) / rotations) * 100 << "%" << endl;
    cout << (double(p4) / rotations) * 100 << "%" << endl;
    cout << (double(p5) / rotations) * 100 << "%" << endl;

    return 0;
}
