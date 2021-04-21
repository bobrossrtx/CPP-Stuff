#include <iostream>

#ifndef HELLO_H
#define HELLO_H

namespace Hello {
	class HelloWorldGlobal {
	public:
		std::string message = "";

	protected:
		void sendMessage(std::string Message) {
			std::cout << Message << std::endl;
		}
	};

	class HelloWorld : public HelloWorldGlobal {
	public:
		void callMessage(std::string Message) {
			sendMessage(Message);
		};
	};
}

#endif