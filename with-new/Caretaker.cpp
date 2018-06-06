#include <iostream>
#include "Caretaker.h"
#include "Memento.h"

// Badprog.com

//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
Caretaker::Caretaker() : _lastElementInList(NULL) {
}

//-----------------------------------------------------------------------------
// DTOR
//-----------------------------------------------------------------------------
Caretaker::~Caretaker() {
  for (Memento *element : _listMemento) {
    delete element;
  }
  _listMemento.clear();
  
  if (NULL != _lastElementInList) {
    delete _lastElementInList;
  }
}

//-----------------------------------------------------------------------------
// setMemento
//-----------------------------------------------------------------------------
void Caretaker::setMemento(Memento *memento) {
  _listMemento.push_back(memento);
}

//-----------------------------------------------------------------------------
// getMemento
//-----------------------------------------------------------------------------
Memento *Caretaker::getMemento() {
  _lastElementInList = _listMemento.back();
  _listMemento.pop_back();
  return _lastElementInList;
}
