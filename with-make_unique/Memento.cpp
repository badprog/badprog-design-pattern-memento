#include <iostream>
#include <memory>
#include "Memento.h"

// Badprog.com

//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
Memento::Memento(Originator originator) : _originator(originator) {
}

//-----------------------------------------------------------------------------
// DTOR
//-----------------------------------------------------------------------------
Memento::~Memento() {
}

//-----------------------------------------------------------------------------
// setState
////-----------------------------------------------------------------------------
void Memento::setOriginator(Originator originator) {
	_originator = originator;
}

//-----------------------------------------------------------------------------
// getState
//-----------------------------------------------------------------------------
Originator Memento::getOriginator() {
	return _originator;
}