#include <memory>
#include <iostream>
#include "Originator.h"
#include "Caretaker.h"

// Badprog.com

//-----------------------------------------------------------------------------
// Main
//-----------------------------------------------------------------------------
int main()
{
	// A
	auto originator = std::make_unique<Originator>("A", 1);
	auto caretaker = std::make_unique<Caretaker>();

	std::cout << "Name = " << originator->getName() << std::endl;
	std::cout << "Age = " << originator->getAge() << std::endl;
	caretaker->setMemento(originator->createMemento());

	// B
	originator->setName("B");
	originator->setAge(2);
	std::cout << "Name = " << originator->getName() << std::endl;
	std::cout << "Age = " << originator->getAge() << std::endl;
	caretaker->setMemento(originator->createMemento());

	// C
	originator->setName("C");
	originator->setAge(3);
	std::cout << "Name = " << originator->getName() << std::endl;
	std::cout << "Age = " << originator->getAge() << std::endl;
	caretaker->setMemento(originator->createMemento());

	// D
	originator->setName("D");
	originator->setAge(4);
	std::cout << "Name = " << originator->getName() << std::endl;
	std::cout << "Age = " << originator->getAge() << std::endl;
	caretaker->setMemento(originator->createMemento());


	// Go back
	originator->restoreToMemento(caretaker->getMemento());
	std::cout << "Name = " << originator->getName() << std::endl;
	std::cout << "Age = " << originator->getAge() << std::endl;
	originator->restoreToMemento(caretaker->getMemento());
	std::cout << "Name = " << originator->getName() << std::endl;
	std::cout << "Age = " << originator->getAge() << std::endl;
	originator->restoreToMemento(caretaker->getMemento());
	std::cout << "Name = " << originator->getName() << std::endl;
	std::cout << "Age = " << originator->getAge() << std::endl;
	originator->restoreToMemento(caretaker->getMemento());
	std::cout << "Name = " << originator->getName() << std::endl;
	std::cout << "Age = " << originator->getAge() << std::endl;

	return 0;
}
