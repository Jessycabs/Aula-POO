#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int value = max(abs(i - (n / 2)), abs(j - (n / 2))) + 1;
            cout << value << " ";
        }
        cout << endl;
    }
}

int main() {
    int size = 7;  //matriz 7x7
    printPattern(size);
    return 0;
}
