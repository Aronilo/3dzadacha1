#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z;

    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;

    int answer;

    bool isInSphere = x * x + y * y + z * z < 1,
        isInCylinder = sqrt((pow(z - y, 2) + pow(x - z, 2)
            + pow(y - x, 2)) / 3) < 0.2;

    if (isInSphere && isInCylinder) {
        answer = 4;
    }
    else if (isInSphere && !isInCylinder) {
        answer = 3;
    }
    else if (!isInSphere && isInCylinder) {
        answer = 2;
    }
    else {
        answer = 1;
    }

    cout << answer << endl;
    return 0;
}
