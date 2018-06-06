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
	Originator *originator = new Originator("A", 1);
    Caretaker *caretaker = new Caretaker();

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

	delete caretaker;
	delete originator;

    return 0;
}
