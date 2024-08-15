#include <iostream>

// +, -, *, /   
void calculate(int x, int y, char op) {
    using std::cout;
    using std::endl;

    switch (op)
    {
    case '+':
        cout << x << " + " << y << " = " << x + y << endl;
        break;
    case '-':
        cout << x << " - " << y << " = " << x - y << endl;
        break;
    case '*':
        cout << x << " * " << y << " = " << x * y << endl;
        break;
    case '/':
        cout << x << " / " << y << " = " << x / y << endl;
        break;
    default:
        cout << "Not supported" << endl;
        break;
    }
}

int main() {
    calculate(10, 2, '+');
    calculate(10, 2, '-');
    calculate(10, 2, '*');
    calculate(10, 2, '/');
    calculate(10, 2, '%');
}