#include "Animal.h"
#include <iostream>
#include <random>

using namespace std;
class Zoo {
private:
    Animal* animals[10]; // 동물 객체를 저장하는 포인터 배열
public:
    

    void addAnimal();

    void performActions();

    Animal* createRandomAnimal();

    ~Zoo();
};
void Zoo::addAnimal()
{
    for (int i = 0; i < 10; i++)
    {
        animals[i] = createRandomAnimal();
    }
}

Zoo::~Zoo()
{;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        delete animals[i];
        cout << i << endl;
        animals[i] = nullptr;
    }
}
void Zoo::performActions()
{
    for (int i = 0; i < 10; i++)
    {
        animals[i]->MakeSound();
    }
}

Animal* Zoo::createRandomAnimal()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 3);
    int random = dis(gen);
    if (random == 0)
    {
        Cat* cat = new Cat;
        return cat;
    }
    else if (random == 1)
    {
        Dog* dog = new Dog;
        return dog;
    }
    else
    {
        Cow* cow = new Cow;
        return cow;
    }
}

int main()
{
    Zoo zoo;
    zoo.addAnimal();
    zoo.performActions();
	return 0;
}
