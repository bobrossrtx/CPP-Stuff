#include <iostream>
#include "hello.h"
using namespace std;
using namespace Hello;

namespace Namespaces {
	void _main(string Message) {
		HelloWorldGlobal helloWorldGlobal;
		helloWorldGlobal.message = Message;

		HelloWorld helloWorld;
		helloWorld.callMessage(helloWorldGlobal.message);
	}
}

int main() {
	Namespaces::_main("Hello, C++ Namespace World!");
	return 0;
}