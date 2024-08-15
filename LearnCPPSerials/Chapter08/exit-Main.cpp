#include <iostream>
#include <cstdlib>

using namespace std;

void cleanup() {
    cout << "Cleanup!" << endl;
}

int main() {
    atexit(cleanup);
    cout << "Main" << endl;

    exit(0);

    cout << "This should not be printed" << endl;
    
    return 0;
}