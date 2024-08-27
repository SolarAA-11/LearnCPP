#include <iostream>
#include <typeinfo>

void floatConvert() {
    int i{2};
    double d{3.5};
    std::cout << typeid(i + d).name() << " " << i + d << std::endl;
}

void shortConvert() {
    short a{1};
    short b{2};
    std::cout << typeid(a + b).name() << " " << a + b << std::endl;
}

int main() {
    floatConvert();
    shortConvert();
    return 0;
}