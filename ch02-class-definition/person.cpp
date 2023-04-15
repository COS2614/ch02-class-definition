#include "person.h"

Person::Person()
{
    m_name = "";
    m_age = 0;
}

Person::Person(const std::string& name, int age)
{
    m_name = name;
    m_age = age;
}

std::string Person::getName() const
{
    return m_name;
}

void Person::setName(const std::string& name)
{
    m_name = name;
}

int Person::getAge() const
{
    return m_age;
}

void Person::setAge(int age)
{
    m_age = age;
}
