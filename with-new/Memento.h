#ifndef __BADPROG_MEMENTO_H__
#define __BADPROG_MEMENTO_H__

// Badprog.com

#include "Memento.h"
#include "Originator.h"

class Memento {
	friend class Originator;

public:
	~Memento();

private:
	Memento(Originator originator);
	void setOriginator(Originator originator);
	Originator getOriginator();

private:
	Originator _originator;

};

#endif // __BADPROG_MEMENTO_H__
