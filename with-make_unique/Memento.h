#ifndef __BADPROG_MEMENTO_H__
#define __BADPROG_MEMENTO_H__

#include <string>
#include "Originator.h"

// Badprog.com

class Memento {
	friend class Originator;

public:
	~Memento();
	Memento(Originator originator);

private:
	void setOriginator(Originator originator);
	Originator getOriginator();

private:
	Originator _originator;
};

#endif // __BADPROG_MEMENTO_H__
