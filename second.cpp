#include <iostream>
using namespace std;

int subtract(int a, int b) {
    if (a > b) {
        return (a-b);
    } else {
        return (b-a);
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int diff = subtract(a, b);
    cout << diff << endl;
    return 0;
}