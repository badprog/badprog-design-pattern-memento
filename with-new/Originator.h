#ifndef __BADPROG_ORIGINATOR_H__
#define __BADPROG_ORIGINATOR_H__

#include <string>

// Badprog.com

class Memento;

class Originator {
public:
	Originator(const std::string &name, const int age);
	~Originator();

	void setName(const std::string &name);
	const std::string getName() const ;
	
	void setAge(const int age);
	const int getAge() const;

	Memento *createMemento();
	void restoreToMemento(Memento *memento);

private:
	std::string _name;
	int	_age;
};

#endif // __BADPROG_ORIGINATOR_H__
