#ifndef __BADPROG_CARETAKER_H__
#define __BADPROG_CARETAKER_H__

#include <list>

// Badprog.com

class Memento;

class Caretaker {
public:
	Caretaker();
	~Caretaker();

	void setMemento(Memento *memento);
	Memento *getMemento();

private:
	std::list<Memento *> _listMemento;
	Memento *_lastElementInList;
};

#endif // __BADPROG_CARETAKER_H__
