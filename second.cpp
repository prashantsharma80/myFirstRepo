#include <iostream>
using namespace std;

int add(int a, int b) {
    return (a+b);
}

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
    int sum = add(a, b);
    cout << sum << endl;
    int diff = subtract(a, b);
    cout << diff << endl;
    return 0;
}