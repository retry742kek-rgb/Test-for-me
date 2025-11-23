#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    cout << "Факториал_числаfff " << number << " равен " << factorial(number) << endl;
    cout << "puk";
    return 0;
}
