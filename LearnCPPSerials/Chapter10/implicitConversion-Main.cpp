#include <iostream>

void someFcn(int i) {

}

int main() {
    double d{5.0};

    someFcn(d);
    someFcn(static_cast<int>(d));

    return 0;
}
