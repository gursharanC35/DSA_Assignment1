
#include <iostream>
using namespace std;

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += a[i][j];
        }
        cout << "Sum of row " << i << rowSum << endl;
    }

    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 2; i++) {
            colSum += a[i][j];
        }
        cout << "Sum of column " << j << ": " << colSum << endl;
    }

    return 0;
}

