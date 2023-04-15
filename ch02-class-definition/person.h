#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
    Person();
    Person(const std::string& name, int age);

    std::string getName() const;
    void setName(const std::string& name);

    int getAge() const;
    void setAge(int age);

private:
    std::string m_name;
    int m_age;
};

#endif
