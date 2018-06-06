#include <iostream>
#include <memory>
#include "Caretaker.h"
#include "Originator.h"

// Badprog.com

//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
Caretaker::Caretaker() {
}

//-----------------------------------------------------------------------------
// DTOR
//-----------------------------------------------------------------------------
Caretaker::~Caretaker() {
}

//-----------------------------------------------------------------------------
// setMemento
//-----------------------------------------------------------------------------
void Caretaker::setMemento(std::unique_ptr<Memento> memento) {
	_listMemento.push_back(std::move(memento));
}

//-----------------------------------------------------------------------------
// getMemento
//-----------------------------------------------------------------------------
std::unique_ptr<Memento> Caretaker::getMemento() {
	std::unique_ptr<Memento> _lastElementInList;
	_lastElementInList = std::move(_listMemento.back());
	_listMemento.pop_back();
	return _lastElementInList;
}
