#include <iostream>

void foo(int) {

}

void foo(const int&) {
    
}

int main() {
    int x{1};
    foo(x);
    return 0;
}

