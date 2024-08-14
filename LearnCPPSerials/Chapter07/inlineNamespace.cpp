#include <iostream>

namespace Foo {
	namespace V1 {
		void doSomething() {
			std::cout << "V1" << std::endl;
		}
	}

	inline namespace V2 {
		void doSomething() {
			std::cout << "V2" << std::endl;
		}
	}
}

int main() {
    Foo::V1::doSomething();
    Foo::V2::doSomething();
    Foo::doSomething();
    return 0;
}