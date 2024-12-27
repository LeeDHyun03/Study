#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
public:
	virtual void MakeSound() = 0;
};

class Cat : public Animal
{
	void MakeSound()
	{
		std::cout << "moew!\n";
	}
};
class Cow : public Animal
{
	void MakeSound()
	{
		std::cout << "moo!\n";
	}
};
class Dog : public Animal
{
	void MakeSound()
	{
		std::cout << "Woof!\n";
	}
};

#endif
