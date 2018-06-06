#ifndef __BADPROG_CARETAKER_H__
#define __BADPROG_CARETAKER_H__

#include "Memento.h"
#include <list>

// Badprog.com


class Caretaker {
public:
	Caretaker();
	~Caretaker();

	void setMemento(std::unique_ptr<Memento> memento);
	std::unique_ptr<Memento> getMemento();

private:
	std::list<std::unique_ptr<Memento>> _listMemento;
};

#endif // __BADPROG_CARETAKER_H__
