#ifndef __BADPROG_ORIGINATOR_H__
#define __BADPROG_ORIGINATOR_H__

#include <string>

// Badprog.com

class Memento;

//-----------------------------------------------------------------------------
// Originator
//-----------------------------------------------------------------------------
class Originator {
public:
	Originator(const std::string &name, const int age);
	~Originator();

	void setName(const std::string &name);
	const std::string getName() const;

	void setAge(const int age);
	const int getAge() const;

	std::unique_ptr<Memento> createMemento();
	void restoreToMemento(std::unique_ptr<Memento> memento);

private:
	std::string _name;
	int	_age;
};

#endif // __BADPROG_ORIGINATOR_H__
