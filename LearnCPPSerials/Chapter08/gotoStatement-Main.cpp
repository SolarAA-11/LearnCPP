#include <iostream>
#include <cmath>

using namespace std;

// void someFunction() {
// goto target:
// 	// ...
// 	int x{12};
// 	// ...

// target:
// 	x += 50;   // compile error
// }

// void anotherFunction() {
// target:
// 	cout << "Foo" << endl;
// }

// void illegalFunction() {
// 	goto target;
// }

void doSomething(bool isBack) {
begin:
	cout << "Begin Function" << endl;

	if(isBack) {
		isBack = false;
		goto begin;
	} else {
		goto end;
	}

	cout << "Should not print" << endl;

end:
	cout << "End of this function" << endl;
}

int main() {
    double x{};

tryAgain:
    cout << "Enter  a non-negative number: ";
    cin >> x;
    if (x < 0) {
        cout << "You entered a negative number!" << endl;
        goto tryAgain;
    }

    cout << "The square root of " << x << " is " << sqrt(x) << endl;

    doSomething(true);

    return 0;
}
