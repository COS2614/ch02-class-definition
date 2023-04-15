#include <iostream>
#include "person.h"

int main()
{
    Person person1;
    person1.setName("John Doe");
    person1.setAge(30);

    std::cout << "Person 1: " << person1.getName() << ", " << person1.getAge() << " years old" << std::endl;

    Person person2("Jane Smith", 25);

    std::cout << "Person 2: " << person2.getName() << ", " << person2.getAge() << " years old" << std::endl;

    return 0;
}
